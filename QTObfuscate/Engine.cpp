#include "Engine.h"

Options *userOptions = NULL;
Engine *g_engine = NULL;


Engine::Engine()
{
	m_loaded = false;

	g_engine = this;

        userOptions = new Options;

	m_fileManager = new FileManager();

        m_pluginManager = new PluginManager();

        m_mainwindow = new MainWindow();

	m_loaded = true;
}

Engine::~Engine()
{
	if( m_loaded == true )
	{
		SAFE_DELETE( m_fileManager );
                SAFE_DELETE( m_pluginManager );
                SAFE_DELETE( m_mainwindow );
                SAFE_DELETE( userOptions );
                SAFE_DELETE( g_engine );
	}
}

FileManager* Engine::getFileManager()
{
	return m_fileManager;
}

MainWindow* Engine::getmainwindow()
{
	return m_mainwindow;
}

PluginManager*  Engine::getPluginManager()
{
        return m_pluginManager;
}
