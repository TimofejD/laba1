## First part
**glutInit** - is used to initialize the GLUT library

**glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)** - sets the initial display mode

*GLUT_DOUBLE* - bit mask to select a double buffered window

*GLUT_RGBA* - bit mask to select an RGBA mode window

**glutInitWindowSize(1024, 768)**

**glutInitWindowPosition(100, 100)**

**glutCreateWindow("Tutorial 01")** - these 3 functions are used to change the window parameters: its size, position, name

**glutDisplayFunc(RenderSceneCB)** - sets the display callback for the current window

*RenderSceneCB* - callable function that performs operaions in the current window

**glutMainLoop()** - enters the processing loop to work with window

**glClearColor(0.0f, 0.0f, 0.0f, 0.0f)** - specify the red, green, blue, and alpha values used when the color buffers are cleared 

**glClear(GL_COLOR_BUFFER_BIT)** - clears framebuffer

*GL_COLOR_BUFFER_BIT* - constant that is used to tell the glClear which buffers we want to clear

**glutSwapBuffers()** - changes framebuffer and background buffer

## Second part

**GLenum res = glewInit()** - initializes GLEW library

**if (res != GLEW_OK) {...}** - check if GLEW is defined correctly

**glm::vec3 Vertices[1]** - creating an array in which we will store vertices

**Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f)** - creating a point in a 3d space with coordinates in a center

**GLuint VBO** - creating a global variable to store a pointer on vertices buffer

**glGenBuffers(1, &VBO)** - generates objects of variable types

*First parameter **1*** - specifies the number of buffer objects to be generated

*Second parameter **&VBO*** - specifies an array in which the generated buffer objects are stored



