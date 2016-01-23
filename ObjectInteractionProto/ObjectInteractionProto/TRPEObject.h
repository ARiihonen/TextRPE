#ifndef _TRPE_OBJECT_H_
#define _TRPE_OBJECT_H_

class TrpeObject
{
public:
	TrpeObject();
	void createObject();
	enum interActions
	{
		TRPE_take,
		TRPE_jump,
		TRPE_throw,
		TRPE_sense,
		TRPE_use,
		TRPE_touch,
		TRPE_climb,
		TRPE_discard
	};
private:
};

#endif // !_TRPE_OBJECT_H_

