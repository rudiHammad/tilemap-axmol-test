To test the project copy the content into you content, and overrite the AppDelegate.cpp, MainScene.cpp and MainScene.h (AppDeletate.h is the same than the defautl)
If you run the code as it is you should see this, which is correct
![Capture](https://github.com/user-attachments/assets/1fcdbe47-662a-4c3b-b796-d7b0114ad690)

Now in the MainScene.cpp, comment his line `tileMap->initWithTMXFile("tilesets/myOtherTilemap.tmx");` and uncomment this one
`tileMap->initWithTMXFile("tilemaps/myTilemap.tmx");`. Then you should get this error:
```
void Object::retain()
{
    AXASSERT(_referenceCount > 0, "reference count should be greater than 0");
    ++_referenceCount;
}
```
In tiled, both case, the tile map (.tmx) has included the same tileset (myTileset.tsx). The working version has myOtherTilemap.tmx in
the same folder than the tileset myTileset.tsx. The one erroring version, has myTilemap.tmx in a different folder than the tileset.


