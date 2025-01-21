#include "MainScene.h"

USING_NS_AX;



bool MainScene::init()
{

    if (!Scene::init())
    {
        return false;
    }

    auto visibleSize = _director->getVisibleSize();
    auto origin = _director->getVisibleOrigin();
    auto safeArea = _director->getSafeAreaRect();
    auto safeOrigin = safeArea.origin;


    tileMap = new ax::FastTMXTiledMap();
    tileMap->initWithTMXFile("tilemaps/myTilemap.tmx");
    tileMap->setTileAnimEnabled(true);
    addChild(tileMap);


    // scheduleUpdate() is required to ensure update(float) is called on every loop
    scheduleUpdate();

    return true;
}




void MainScene::update(float delta)
{

}
