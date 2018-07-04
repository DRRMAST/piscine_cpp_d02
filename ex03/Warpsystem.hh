#ifndef WARPSYSTEM_HH
#define WARPSYSTEM_HH

#include <iostream>

namespace	WarpSystem
{
	class QuantumReactor
	{
    
		public:
			QuantumReactor();
			~QuantumReactor();
			bool isStable();
			void setStability(bool);
		private:
			bool _stability;
    };
    class Core
	{
		private:
		QuantumReactor* _coreReactor;

		public:
			Core(QuantumReactor *init);
			~Core();
			QuantumReactor* checkReactor();
	};
};

#endif
