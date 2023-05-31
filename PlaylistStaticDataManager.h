#pragma once
#include "PlaylistDataManager.h"
class PlaylistStaticDataManager :
    public PlaylistDataManager
{
public:
    list<PlayList> load()override;
    void save(PlayList playlist)override;
};

