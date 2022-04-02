##First part
**glutInit** - is used to initialize the GLUT library
**glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)** - enabling double bufferization using GLUT_DOUBLE parameter, enabling color buffer that we use for rendering

**glutInitWindowSize(1024, 768)
glutInitWindowPosition(100, 100)
glutCreateWindow("Tutorial 01")** - these functions are used to change the window parameters: its size, position, name

**glutDisplayFunc(RenderSceneCB)** - callback function to work with window directly
**glutMainLoop()** - enters the processing loop to work with window

**glClearColor(0.0f, 0.0f, 0.0f, 0.0f)** - set the color that will be used during framebuffer cleaning. This color is black
**glClear(GL_COLOR_BUFFER_BIT)** - clears framebuffer
**glutSwapBuffers()** - changes framebuffer and background buffer


