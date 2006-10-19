#ifndef _ICON_H_
#define _ICON_H_

#include <string>
#include "ImgWrap.h"

class Bar;
class SuperBar;

class Icon{
    protected:
	_image icon;

	/* normal state */
	int ox, oy;
	int osize;
	/* current state */
	int x, y;
	int size;

	/* redraw ? */
	int need_update;
	/* clean coords */
	int cx, csize;

	std::string command;

	/* extend friendship? */
	friend class Bar;
	friend class SuperBar;

    public:

	Icon(std::string iconImg, std::string cmd, int x, int y);
	~Icon();
};

#endif /* _ICON_H_ */
