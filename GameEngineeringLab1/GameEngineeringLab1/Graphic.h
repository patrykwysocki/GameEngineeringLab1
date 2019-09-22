#ifndef GRAPHIC_H
#define GRAPHIC_H
#include "IGraphic.h"
//real subject inherits subject interface
class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void draw();
private:

};
#endif // !GRAPHIC_H
