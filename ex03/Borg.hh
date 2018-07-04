#ifndef BORG_HH
#define BORG_HH

#include "Federation.hh"

#include "Warpsystem.hh"
#include "Destination.hh"
#include "Federation.hh"

namespace	Borg
{

    class	Ship
    {
      
		public:
			Ship(int wF, short);
			Ship(int wF);
			~Ship();
			void setupCore(WarpSystem::Core* ptr);
			void checkCore();
			bool move(int warp, Destination d);
			bool move(int warp);
			bool move(Destination d);
			bool move();
			int	getShield();
			void setShield(int);
			int	getWeaponFrequency();
			void setWeaponFrequency(int);
			short getRepair();
			void setRepair(short);
			void fire(Federation::Starfleet::Ship*); 
			void fire(Federation::Ship*); 
			void repair(); 
		private :
			int	_side;
			short _maxWarp;
			WarpSystem::Core* _core;
			Destination _location;
			Destination	_home;
			int	_shield;
			int	_weaponFrequency;
			short _repair;
		};
  
};

#endif
