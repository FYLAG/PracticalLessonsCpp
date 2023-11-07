#ifndef VIEW_CONSOLE_H
#define VIEW_CONSOLE_H

#include "model_square.h"
#include "observer.h"

class ViewConsole: public Observer {

private:

    Square *object;

public:

    ViewConsole(Square *_object);

    void update() override;

};

#endif