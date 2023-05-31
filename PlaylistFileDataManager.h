#pragma once
#include "PlaylistDataManager.h"

class PlaylistFileDataManager :
    public PlaylistDataManager
{
public:
    list<PlayList> load()override;
    void save(PlayList playlist)override;
};

