#pragma once

typedef struct tag_SessionDesc
{
	int sessionType; // 0 listener, 1 connector
	int identifier;

	tag_SessionDesc()
	{
		sessionType = -1;
		int identifier = -1;
	}

}_SessionDesc;