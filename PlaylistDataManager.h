#pragma once
#include <iostream>
#include <list>

#include "Playlist.h"

using namespace std;
class PlaylistDataManager
{
	virtual list<PlayList> load() = 0;
	virtual void save(PlayList playlist) = 0;
};

