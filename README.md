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

## Second and third part

**GLenum res = glewInit()** - initializes GLEW library

**if (res != GLEW_OK) {...}** - check if GLEW is defined correctly

**glm::vec3 Vertices[1]** - creating an array in which we will store vertices

**Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f)** - creating a point in a 3d space with coordinates in a center

**GLuint VBO** - creating a global variable to store a pointer on vertices buffer

**glGenBuffers(1, &VBO)** - generates objects of variable types

*First parameter **1*** - specifies the number of buffer objects to be generated

*Second parameter **&VBO*** - specifies an array in which the generated buffer objects are stored

**glBindBuffer(GL_ARRAY_BUFFER, VBO)** - binds a buffer object to the specified buffer binding point

*First parameter **GL_ARRAY_BUFFER*** - means that the buffer will bound to array 

*Second parameter **VBO*** - name of a buffer object

**glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW)** - creates and initializes a buffer object's data store

*First parameter **GL_ARRAY_BUFFER*** - specifies the target to which the buffer object is bound to. In this case it's an array

*Second parameter **sizeof(Vertices)*** - specifies the size in bytes of the buffer object's new data store

*Third parameter **Vertices*** - specifies an address to data that will be copied into the data store for initialization

*Fourth parameter **GL_STATIC_DRAW*** - specifies the expected usage pattern of the data store. In this case it means that the data store contents will be modified once and used many times and the data store contents used as the source for GL drawing 

**glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0)** - define an array of generic vertex attribute data

*First parameter **0*** - specifies the index of the generic vertex attribute to be modified. In this case we use 0 by default

*Second parameter **3*** - specifies the number of components per generic vertex attribute. In this case 3 for X Y Z

*Third parameter **GL_FLOAT*** - specifies the data type of each component in the array

*Fourth parameter **GL_FALSE*** - specifies fixed-point values

*Fifth parameter **0*** - specifies the byte offset between consecutive generic vertex attributes. In this case the generic vertex attributes are understood to be tightly packed in the array

*Sixth parameter **0*** - specifies an offset of the first component of the first generic vertex attribute

**glEnableVertexAttribArray(0)** - enables the generic vertex attribute array specified by index, so we allow to use vertex attribute

**glDisableVertexAttribArray(0)** - disables the generic vertex attribute array specified by index

**glDrawArrays(GL_LINE_LOOP, 0, 3)** - renders our figure by points

*First parameter **GL_LINE_LOOP*** - specifies what kind of primitives to render. In this case it's a points connected by line

*Second parameter **0*** - specifies the starting index in the enabled arrays

*Third parameter **3*** - specifies the number of indices to be rendered
