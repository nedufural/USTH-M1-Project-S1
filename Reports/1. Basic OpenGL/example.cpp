#include <GLUT/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_STRIP);

    glVertex2f(-0.25, -0.25);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.25, 0.25);
    glVertex2f(0, 0.5);
    glVertex2f(-0.25, 0.25);
    glVertex2f(0.25, 0.25);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.25, -0.25);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(200, 200);
    glutInitWindowSize(640, 400);
    glutInitDisplayMode(GLUT_SINGLE);
    glutCreateWindow("The House");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}