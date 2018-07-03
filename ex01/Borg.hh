#ifndef BORG_HH
#define BORG_HH

#include "Federation.hh"

namespace	Borg
{

    class	Ship
    {
      
    public:
      Ship();
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();

    private :
      int		_side;
      short		_maxWarp;
      WarpSystem::Core*	_core;
    };
  
};

#endif
