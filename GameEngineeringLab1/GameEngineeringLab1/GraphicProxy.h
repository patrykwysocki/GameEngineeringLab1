#ifndef GRAPHIC_PROXY_H
#define GRAPHIC_PROXY_H
#include "Graphic.h"
#include "IGraphic.h"
//on first call on the proxy object
//creates it in the getInstance if one does not exist
//This is lazy loading
class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void draw();

private:
	Graphic* graphic;
	Graphic* getInstance(void);
};
#endif // !GRAPHIC_PROXY_H




