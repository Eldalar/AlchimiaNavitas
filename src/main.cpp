#include <OGRE/Ogre.h>
#if OGRE_PLATFORM == PLATFORM_WIN32 || OGRE_PLATFORM == OGRE_PLATFORM_WIN32
    #define WIN32_LEAN_AND_MEAN
    #include "windows.h"
    INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strcCmdLine, INT)
#else
int main( int argc, char** argv)
#endif
{
    Ogre::Root* mRoot = new Ogre::Root("plugins.cfg", "display.cfg", "log.txt");
    if(!mRoot->showConfigDialog()) {
        return 0;
    }
    Ogre::RenderWindow* mWindow = mRoot->initialise(true, "AlchimiaNavitas");
    Ogre::SceneManager* mSceneMgr = mRoot->createSceneManager(Ogre::ST_GENERIC);

    Ogre::Camera* mCamera = mSceneMgr->createCamera("PlayerCam");
    mCamera->setPosition(Ogre::Vector3(0,0,500));
    mCamera->lookAt(Ogre::Vector3(0,0,-300));
    mCamera->setNearClipDistance(5);

    Ogre::Viewport* vp = mWindow->addViewport(mCamera);
    vp->setBackgroundColour(Ogre::ColourValue(0,0,0));

    mCamera->setAspectRatio(Ogre::Real(vp->getActualWidth())/Ogre::Real(vp->getActualHeight()));

    return 0;
}

