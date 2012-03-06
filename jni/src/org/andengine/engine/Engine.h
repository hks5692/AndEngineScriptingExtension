#ifndef Engine_H
#define Engine_H

#include <jni.h>
#include "src/Wrapper.h"
#include "src/org/andengine/opengl/vbo/VertexBufferObjectManager.h"
#include "src/org/andengine/opengl/texture/TextureManager.h"
#include "src/org/andengine/opengl/font/FontManager.h"

extern "C" {
	// ===========================================================
	// org.andengine.extension.scripting.engine.EngineProxy
	// ===========================================================

	JNIEXPORT void JNICALL Java_org_andengine_extension_scripting_engine_EngineProxy_nativeInitClass(JNIEnv*, jclass);
}

class Engine : public Wrapper {
	private:
		VertexBufferObjectManager* mVertexBufferObjectManager;
		TextureManager* mTextureManager;
		FontManager* mFontManager;

	public:
		/* Constructors */
		Engine(jobject);

		/* Getter & Setter */
		VertexBufferObjectManager* getVertexBufferObjectManager();
		TextureManager* getTextureManager();
		FontManager* getFontManager();
};

#endif
