#ifndef _OBJECTS__H
#include "objects.h"
#endif

class AutoPilot
{       
private:
	//float par[100]; // parametry pocz�tkowe i parametry aktualne
	//long number_of_params;
public:
  AutoPilot();
  void AutoControl(MovableObject *ob);                        // pojedynczy krok sterowania
  void ControlTest(MovableObject *_ob,float krok_czasowy, float czas_proby); 
};