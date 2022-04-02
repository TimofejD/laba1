## First part
**glutInit** - is used to initialize the GLUT library

**glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)** - enabling double bufferization using GLUT_DOUBLE parameter, enabling color buffer that we use for rendering

**glutInitWindowSize(1024, 768)**

**glutInitWindowPosition(100, 100)**

**glutCreateWindow("Tutorial 01")** - these 3 functions are used to change the window parameters: its size, position, name

**glutDisplayFunc(RenderSceneCB)** - callback function to work with window directly

**glutMainLoop()** - enters the processing loop to work with window

**glClearColor(0.0f, 0.0f, 0.0f, 0.0f)** - set the color that will be used during framebuffer cleaning. This color is black

**glClear(GL_COLOR_BUFFER_BIT)** - clears framebuffer

**glutSwapBuffers()** - changes framebuffer and background buffer

## Second part

**GLenum res = glewInit()** - initializes GLEW library. We need to check it for mistakes

if (res != GLEW_OK)
{
    fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
    return 1;
}

**glm::vec3 Vertices[1]** - creating an array in which we will store vertices

**Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f)** - creating a point with coordinates in a center

**GLuint VBO** - creating a global variable to store a pointer on vertices buffer

**glGenBuffers(1, &VBO)** - generates objects of variable types. First argument is amount of objects, second one is a reference to GLuint type store

