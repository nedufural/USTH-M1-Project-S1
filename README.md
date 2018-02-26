# OpenGL image filtering

Image filtering is a well known technique to apply certain effects to an input image, such as brightness/contrast control, saturation, hue modification, blur/sharpen, etc. Most of the filters can be implemented using 2D convolution of the image. Traditionally, these filters are computed using CPU using basic for-loops for the convolution.

This project aims at implementing basic filters using OpenGL (with GLSL as the shader language) with C/C++ language. We expect to perform image filtering with 2 configurations:

- Running on screen with GLUT library
- Running offscreen with OSMesa library

## Members:
- Nguyen Duc Tung
- Chinedu Agwu

*Supervised by: **Dr. Tran Giang Son***
