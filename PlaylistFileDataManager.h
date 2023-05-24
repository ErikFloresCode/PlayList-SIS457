#pragma once
#include "PlaylistDataManager.h"

class PlaylistFileDataManager :
    public PlaylistDataManager
{
    list<PlayList> load()override;
    void save(PlayList playlist)override;
};

