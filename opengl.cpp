

// g++ -o test -Wall opengl.cpp -mwindows glut32.lib -lopengl32 -lglu32
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#define GLUT_DISABLE_ATEXIT_HACK

//// Função callback de redesenho da janela de visualização
void figuraA(){
  glColor3f(0,1,0);
  glBegin(GL_QUADS);
    glVertex2f(-20, -20);
    glVertex2f(-20, 20);
    glVertex2f(20, 20);
    glVertex2f(20, -20);
  glEnd();

  glColor3f(0,1,0);
  glBegin(GL_QUADS);
    glVertex2f(20, -20);
    glVertex2f(20, 0);
    glVertex2f(40, 0);
    glVertex2f(40, -20);
  glEnd();

  glColor3f(0,1,0);
  glBegin(GL_TRIANGLES);
    glVertex2f(-20, 20);
    glVertex2f(20, 20);
    glVertex2f(0, 40);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
    glVertex2f(-10, -20);
    glVertex2f(-10, 0);
    glVertex2f(10, 0);
    glVertex2f(10, -20);
  glEnd();

}

void figuraB(){

  glColor3f(0,1,0);
  glBegin(GL_QUADS);
    glVertex2f(-20, -20);
    glVertex2f(-20, 15);
    glVertex2f(20, 15);
    glVertex2f(20, -20);
  glEnd();

  glColor3f(0,1,0);
  glBegin(GL_TRIANGLES);
    glVertex2f(-40, 15);
    glVertex2f(40, 15);
    glVertex2f(0, 60);
  glEnd();
}

void figuraC(){
  glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,0);
    glVertex2f(60, 0);
    glVertex2f(30, 30);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(0, 60);
    glVertex2f(20, 60);
    glVertex2f(20, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0, 45);
    glVertex2f(0, 65);
    glVertex2f(64, 65);
    glVertex2f(64, 45);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(64, 65);
    glVertex2f(64, 5);
    glVertex2f(35, 35);
    glEnd();
}

void figuraD(){
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 10);
    glVertex2f(10, 0);
    glVertex2f(20, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(10, 10);
    glVertex2f(30, 25);
    glVertex2f(30, 20);
    glVertex2f(20, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(20, 10);
    glVertex2f(30, 25);
    glVertex2f(40, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30, 10);
    glVertex2f(55, 35);
    glVertex2f(70, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(30, 0);
    glVertex2f(30, 10);
    glVertex2f(70, 10);
    glVertex2f(70, 0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(60, -5);
    glVertex2f(75, 15);
    glVertex2f(80, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(70, 10);
    glVertex2f(70, 25);
    glVertex2f(60, 30);
    glVertex2f(60, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(55, 35);
    glVertex2f(45, 42);
    glVertex2f(65, 42);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(45, 42);
    glVertex2f(55, 50);
    glVertex2f(65, 42);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(55, 40);
    glVertex2f(70, 25);
    glVertex2f(70, 20);
    glVertex2f(55, 20);
    glEnd();
}

void Desenha(void)
{
    // Limpa a janela de visualização com a cor branca
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //figuraA();
    // figuraB();
    // figuraC();
    figuraD();





    


    

    //Executa os comandos OpenGL
    glFlush();
}

// Função callback chamada para gerenciar eventos de teclas
void Teclado (unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0);
}

// Função responsável por inicializar parâmetros e variáveis
void Inicializa(void)
{
    // Define a janela de visualização 2D
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-100,100,-100,100);
    glMatrixMode(GL_MODELVIEW);
}

// Programa Principal
int main(void)
{
    // Define do modo de operação da GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Especifica o tamanho inicial em pixels da janela GLUT
    glutInitWindowSize(800,600);

    // Cria a janela passando como argumento o título da mesma
    glutCreateWindow("Primeiro Programa");

    // Registra a função callback de redesenho da janela de visualização
    glutDisplayFunc(Desenha);

    // Registra a função callback para tratamento das teclas ASCII
    glutKeyboardFunc(Teclado);

    // Chama a função responsável por fazer as inicializações
    Inicializa();



    // Inicia o processamento e aguarda interações do usuário
    glutMainLoop();

    return 0;
}
