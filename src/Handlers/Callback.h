#ifndef CALLBACK_H
#define CALLBACK_H

#include "../CommonHandler.h"

#include "vHandler.h"

class  Callback  : public  vHandler  {
public:
int DoIt ();
int Init ();
int Finish ();
};

#endif // CALLBACK_H
