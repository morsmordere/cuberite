
#pragma once

#include "BlockHandler.h"





class cBlockGlassHandler :
	public cBlockHandler
{
public:
	cBlockGlassHandler(BLOCKTYPE a_BlockType)
		: cBlockHandler(a_BlockType)
	{
	}

	virtual void ConvertToPickups(cItems & a_Pickups, NIBBLETYPE a_BlockMeta) /*override*/
	{
	}
} ;




