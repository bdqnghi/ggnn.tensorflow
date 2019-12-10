private void guardedRun() throws InterruptedException {
    mEglHelper = new EglHelper(mGLSurfaceViewWeakRef);
    mHaveEglContext = false;
    mHaveEglSurface = false;
    try {
        GL10 gl = null;
        boolean createEglContext = false;
        boolean createEglSurface = false;
        boolean createGlInterface = false;
        boolean lostEglContext = false;
        boolean sizeChanged = false;
        boolean wantRenderNotification = false;
        boolean doRenderNotification = false;
        boolean askedToReleaseEglContext = false;
        int w = 0;
        int h = 0;
        Runnable event = null;
        while (true) {
            synchronized (sGLThreadManager) {
                while (true) {
                    if (mShouldExit) {
                        return;
                    }
                    if (!mEventQueue.isEmpty()) {
                        event = mEventQueue.remove(0);
                        break;
                    }
                    // Update the pause state.
                    boolean pausing = false;
                    if (mPaused != mRequestPaused) {
                        pausing = mRequestPaused;
                        mPaused = mRequestPaused;
                        sGLThreadManager.notifyAll();
                        if (LOG_PAUSE_RESUME) {
                            Log.i("GLThread", "mPaused is now " + mPaused + " tid=" + getId());
                        }
                    }
                    // Do we need to give up the EGL context?
                    if (mShouldReleaseEglContext) {
                        if (LOG_SURFACE) {
                            Log.i("GLThread", "releasing EGL context because asked to tid=" + getId());
                        }
                        stopEglSurfaceLocked();
                        stopEglContextLocked();
                        mShouldReleaseEglContext = false;
                        askedToReleaseEglContext = true;
                    }
                    // Have we lost the EGL context?
                    if (lostEglContext) {
                        stopEglSurfaceLocked();
                        stopEglContextLocked();
                        lostEglContext = false;
                    }
                    // When pausing, release the EGL surface:
                    if (pausing && mHaveEglSurface) {
                        if (LOG_SURFACE) {
                            Log.i("GLThread", "releasing EGL surface because paused tid=" + getId());
                        }
                        stopEglSurfaceLocked();
                    }
                    // When pausing, optionally release the EGL Context:
                    if (pausing && mHaveEglContext) {
                        GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
                        boolean preserveEglContextOnPause = view == null ? false : view.mPreserveEGLContextOnPause;
                        if (!preserveEglContextOnPause || sGLThreadManager.shouldReleaseEGLContextWhenPausing()) {
                            stopEglContextLocked();
                            if (LOG_SURFACE) {
                                Log.i("GLThread", "releasing EGL context because paused tid=" + getId());
                            }
                        }
                    }
                    // When pausing, optionally terminate EGL:
                    if (pausing) {
                        if (sGLThreadManager.shouldTerminateEGLWhenPausing()) {
                            mEglHelper.finish();
                            if (LOG_SURFACE) {
                                Log.i("GLThread", "terminating EGL because paused tid=" + getId());
                            }
                        }
                    }
                    // Have we lost the SurfaceView surface?
                    if ((!mHasSurface) && (!mWaitingForSurface)) {
                        if (LOG_SURFACE) {
                            Log.i("GLThread", "noticed surfaceView surface lost tid=" + getId());
                        }
                        if (mHaveEglSurface) {
                            stopEglSurfaceLocked();
                        }
                        mWaitingForSurface = true;
                        mSurfaceIsBad = false;
                        sGLThreadManager.notifyAll();
                    }
                    // Have we acquired the surface view surface?
                    if (mHasSurface && mWaitingForSurface) {
                        if (LOG_SURFACE) {
                            Log.i("GLThread", "noticed surfaceView surface acquired tid=" + getId());
                        }
                        mWaitingForSurface = false;
                        sGLThreadManager.notifyAll();
                    }
                    if (doRenderNotification) {
                        if (LOG_SURFACE) {
                            Log.i("GLThread", "sending render notification tid=" + getId());
                        }
                        wantRenderNotification = false;
                        doRenderNotification = false;
                        mRenderComplete = true;
                        sGLThreadManager.notifyAll();
                    }
                    // Ready to draw?
                    if (readyToDraw()) {
                        // If we don't have an EGL context, try to acquire one.
                        if (!mHaveEglContext) {
                            if (askedToReleaseEglContext) {
                                askedToReleaseEglContext = false;
                            } else if (sGLThreadManager.tryAcquireEglContextLocked(this)) {
                                try {
                                    mEglHelper.start();
                                } catch (RuntimeException t) {
                                    sGLThreadManager.releaseEglContextLocked(this);
                                    throw t;
                                }
                                mHaveEglContext = true;
                                createEglContext = true;
                                sGLThreadManager.notifyAll();
                            }
                        }
                        if (mHaveEglContext && !mHaveEglSurface) {
                            mHaveEglSurface = true;
                            createEglSurface = true;
                            createGlInterface = true;
                            sizeChanged = true;
                        }
                        if (mHaveEglSurface) {
                            if (mSizeChanged) {
                                sizeChanged = true;
                                w = mWidth;
                                h = mHeight;
                                wantRenderNotification = true;
                                if (LOG_SURFACE) {
                                    Log.i("GLThread", "noticing that we want render notification tid=" + getId());
                                }
                                // Destroy and recreate the EGL surface.
                                createEglSurface = true;
                                mSizeChanged = false;
                            }
                            mRequestRender = false;
                            sGLThreadManager.notifyAll();
                            break;
                        }
                    }
                    // By design, this is the only place in a GLThread thread where we wait().
                    if (LOG_THREADS) {
                        Log.i("GLThread", "waiting tid=" + getId() + " mHaveEglContext: " + mHaveEglContext + " mHaveEglSurface: " + mHaveEglSurface + " mFinishedCreatingEglSurface: " + mFinishedCreatingEglSurface + " mPaused: " + mPaused + " mHasSurface: " + mHasSurface + " mSurfaceIsBad: " + mSurfaceIsBad + " mWaitingForSurface: " + mWaitingForSurface + " mWidth: " + mWidth + " mHeight: " + mHeight + " mRequestRender: " + mRequestRender + " mRenderMode: " + mRenderMode);
                    }
                    sGLThreadManager.wait();
                }
            }
            if (event != null) {
                event.run();
                event = null;
                continue;
            }
            if (createEglSurface) {
                if (LOG_SURFACE) {
                    Log.w("GLThread", "egl createSurface");
                }
                if (mEglHelper.createSurface()) {
                    synchronized (sGLThreadManager) {
                        mFinishedCreatingEglSurface = true;
                        sGLThreadManager.notifyAll();
                    }
                } else {
                    synchronized (sGLThreadManager) {
                        mFinishedCreatingEglSurface = true;
                        mSurfaceIsBad = true;
                        sGLThreadManager.notifyAll();
                    }
                    continue;
                }
                createEglSurface = false;
            }
            if (createGlInterface) {
                gl = (GL10) mEglHelper.createGL();
                sGLThreadManager.checkGLDriver(gl);
                createGlInterface = false;
            }
            if (createEglContext) {
                if (LOG_RENDERER) {
                    Log.w("GLThread", "onSurfaceCreated");
                }
                GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
                if (view != null) {
                    view.mRenderer.onSurfaceCreated(gl, mEglHelper.mEglConfig);
                }
                createEglContext = false;
            }
            if (sizeChanged) {
                if (LOG_RENDERER) {
                    Log.w("GLThread", "onSurfaceChanged(" + w + ", " + h + ")");
                }
                GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
                if (view != null) {
                    view.mRenderer.onSurfaceChanged(gl, w, h);
                }
                sizeChanged = false;
            }
            if (LOG_RENDERER_DRAW_FRAME) {
                Log.w("GLThread", "onDrawFrame tid=" + getId());
            }
            {
                GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
                if (view != null) {
                    view.mRenderer.onDrawFrame(gl);
                }
            }
            int swapError = mEglHelper.swap();
            switch(swapError) {
                case EGL10.EGL_SUCCESS:
                    break;
                case EGL11.EGL_CONTEXT_LOST:
                    if (LOG_SURFACE) {
                        Log.i("GLThread", "egl context lost tid=" + getId());
                    }
                    lostEglContext = true;
                    break;
                default:
                    // Other errors typically mean that the current surface is bad,
                    // probably because the SurfaceView surface has been destroyed,
                    // but we haven't been notified yet.
                    // Log the error to help developers understand why rendering stopped.
                    EglHelper.logEglErrorAsWarning("GLThread", "eglSwapBuffers", swapError);
                    synchronized (sGLThreadManager) {
                        mSurfaceIsBad = true;
                        sGLThreadManager.notifyAll();
                    }
                    break;
            }
            if (wantRenderNotification) {
                doRenderNotification = true;
            }
        }
    } finally {
        /*
                 * clean-up everything...
                 */
        synchronized (sGLThreadManager) {
            stopEglSurfaceLocked();
            stopEglContextLocked();
        }
    }
}
