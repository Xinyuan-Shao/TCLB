#ifndef MAINCONTAINER_H
#define MAINCONTAINER_H

#include "../CommonHandler.h"

#include "vHandler.h"
#include "Action.h"
#include "GenericAction.h"

class  MainContainer  : public  GenericAction  {
	public:
int Init ();
int Finish ();
};

#endif // MAINCONTAINER_H
