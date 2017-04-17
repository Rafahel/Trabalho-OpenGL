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

void figuraE(){
    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(0, 20);
    glVertex2f(60, 20);
    glVertex2f(60, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(5, 20);
    glVertex2f(5, 35);
    glVertex2f(20, 35);
    glVertex2f(20, 20);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 35);
    glVertex2f(12, 50);
    glVertex2f(25, 35);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(60, 20);
    glVertex2f(50, 35);
    glVertex2f(40, 20);
    glEnd();
}

void figuraF(){
    glTranslatef(-100, -100, 0);
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(10, 10);
    glVertex2f(20, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(10, 0);
    glVertex2f(10, 10);
    glVertex2f(50, 10);
    glVertex2f(50, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(10, 10);
    glVertex2f(10, 25);
    glVertex2f(25, 25);
    glVertex2f(25, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(30, 10);
    glVertex2f(30, 25);
    glVertex2f(50, 25);
    glVertex2f(50, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(10, 25);
    glVertex2f(30, 45);
    glVertex2f(50, 25);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(30, 45);
    glVertex2f(30, 55);
    glVertex2f(45, 55);
    glVertex2f(45, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(50, 25);
    glVertex2f(60, 10);
    glVertex2f(40, 10);
    glEnd();

}

void figuraG(){
    glTranslatef(150, -200, 0);
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 15);
    glVertex2f(15, 30);
    glVertex2f(15, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(3, 15);
    glVertex2f(3, 30);
    glVertex2f(25, 30);
    glVertex2f(25, 15);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(15, 0);
    glVertex2f(15, 15);
    glVertex2f(30, 15);
    glVertex2f(30, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30, 0);
    glVertex2f(30, 15);
    glVertex2f(40, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(25, 30);
    glVertex2f(50, 30);
    glVertex2f(25, 10);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(3, 30);
    glVertex2f(3, 40);
    glVertex2f(12, 30);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(3, 40);
    glVertex2f(12, 30);
    glVertex2f(20, 40);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(3, 40);
    glVertex2f(12, 50);
    glVertex2f(20, 40);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(20, 40);
    glVertex2f(20, 55);
    glVertex2f(12, 55);
    glVertex2f(12, 40);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(20, 55);
    glVertex2f(10, 70);
    glVertex2f(-1, 55);
    glEnd();
}

void figuraH(){
    // glTranslatef(-180,300,0);
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(45, 0);
    glVertex2f(60, 15);
    glVertex2f(60, 0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(65, 15);
    glVertex2f(65, 30);
    glVertex2f(50, 30);
    glVertex2f(50, 15);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(50, 30);
    glVertex2f(35, 45);
    glVertex2f(60, 45);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(50, 30);
    glVertex2f(50, 45);
    glVertex2f(65, 45);
    glVertex2f(65, 30);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(55, 45);
    glVertex2f(70, 45);
    glVertex2f(70, 25);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30, 45);
    glVertex2f(60, 45);
    glVertex2f(60, 70);
    glEnd();
    
    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(60, 70);
    glVertex2f(50, 70);
    glVertex2f(50, 85);
    glVertex2f(60, 85);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(40, 90);
    glVertex2f(70, 90);
    glVertex2f(70, 60);
    glEnd();

}

void grafico(){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0, 200);
    glVertex2f(0, -200);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_LINES);
    glVertex2f(-200, 0);
    glVertex2f(200, 0);
    glEnd();
}


void boneco(){

	glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(10, -55);
    glVertex2f(10, -70);
    glVertex2f(15, -70);
    glVertex2f(15, -55);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(50, -50);
    glVertex2f(50, -37);
    glVertex2f(55, -37);
    glVertex2f(55, -50);
    glEnd();

    glColor3f(0,0,0.5);
	glBegin(GL_QUADS);
    glVertex2f(15, -60);
    glVertex2f(15, -55);
    glVertex2f(25, -55);
    glVertex2f(25, -60);
    glEnd();

    
    glBegin(GL_QUADS);
    glVertex2f(25, -55);
    glVertex2f(20, -55);
    glVertex2f(20, -40);
    glVertex2f(25, -40);
    glEnd();


    glBegin(GL_QUADS);
    glVertex2f(35, -40);
    glVertex2f(20, -40);
    glVertex2f(20, -45);
    glVertex2f(35, -45);
    glEnd();


    glBegin(GL_QUADS);
    glVertex2f(30, -40);
    glVertex2f(35, -40);
    glVertex2f(35, -50);
    glVertex2f(30, -50);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(35, -45);
    glVertex2f(55, -45);
    glVertex2f(55, -50);
    glVertex2f(35, -50);
    glEnd();

    // cintura
    // glColor3f(1,0,0.5);
    glBegin(GL_QUADS);
    glVertex2f(20, -40);
    glVertex2f(20, -30);
    glVertex2f(35, -30);
    glVertex2f(35, -40);
    glEnd();

    //barriga
	glColor3f(0,.3,0);
    glBegin(GL_QUADS);
    glVertex2f(20, -30);
    glVertex2f(20, -10);
    glVertex2f(35, -10);
    glVertex2f(35, -30);
    glEnd();

    // cabeça
    glColor3f(1,.75,0);
    glBegin(GL_QUADS);
    glVertex2f(15, -10);
    glVertex2f(15, 20);
    glVertex2f(40, 20);
    glVertex2f(40, -10);
    glEnd();

    glColor3f(1,.75,0);
    glBegin(GL_QUADS);
    glVertex2f(13, -5);
    glVertex2f(13, 15);
    glVertex2f(43, 15);
    glVertex2f(43, -5);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(13, 0);
    glVertex2f(13, 15);
    glVertex2f(17, 15);
    glVertex2f(17, 0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(15, 20);
    glVertex2f(45, 20);
    glVertex2f(45, 15);
    glVertex2f(15, 15);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(17, 20);
    glVertex2f(19, 20);
    glVertex2f(19, 5);
    glVertex2f(17, 5);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(25, 20);
    glVertex2f(40, 20);
    glVertex2f(40, 10);
    glVertex2f(25, 10);
    glEnd();

    // Olhos

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(23, 10);
    glVertex2f(28, 10);
    glVertex2f(28, 0);
    glVertex2f(23, 0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(23, 0);
    glVertex2f(28, 0);
    glVertex2f(28, 5);
    glVertex2f(23, 5);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(37, 10);
    glVertex2f(40, 10);
    glVertex2f(40, 0);
    glVertex2f(37, 0);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(37, 0);
    glVertex2f(40, 0);
    glVertex2f(40, 5);
    glVertex2f(37, 5);
    glEnd();



    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(50, -50);
    glVertex2f(50, -37);
    glVertex2f(55, -37);
    glVertex2f(55, -50);
    glEnd();
}

void desenho(){
    glClearColor(0,0,.8,0); // Cor de fundo do desenho (azul ceu)
    glClear(GL_COLOR_BUFFER_BIT);

    /// Chão
    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(-200, -200);
    glVertex2f(-200, -180);
    glVertex2f(200, -180);
    glVertex2f(200, -200);
    glEnd();

    // Caixa amarela

    glColor3f(1,1,0);
    glBegin(GL_QUADS);
    glVertex2f(100, 30);
    glVertex2f(100, 70);
    glVertex2f(130, 70);
    glVertex2f(130, 30);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(110, 35);
    glVertex2f(110, 40);
    glVertex2f(120, 40);
    glVertex2f(120, 35);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(110, 45);
    glVertex2f(110, 65);
    glVertex2f(120, 65);
    glVertex2f(120, 45);
    glEnd();

    // Nuvens

    // Núvem 1
	glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(0, 45);
    glVertex2f(0, 65);
    glVertex2f(55, 65);
    glVertex2f(55, 45);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(55, 65);
    glVertex2f(55, 80);
    glVertex2f(45, 80);
    glVertex2f(45, 65);
    
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(45, 65);
    glVertex2f(45, 90);
    glVertex2f(30, 90);
    glVertex2f(30, 65);  
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(30, 65); 
    glVertex2f(30, 80); 
    glVertex2f(15, 80);
    glVertex2f(15, 65);
    glEnd();

    boneco();

    // Núvem 2

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(40, 100);
    glVertex2f(40, 110);
    glVertex2f(60, 110);
    glVertex2f(60, 100);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(30, 110);
    glVertex2f(30, 120);
    glVertex2f(55, 120);
    glVertex2f(55, 110);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(40, 120);
    glVertex2f(40, 125);
    glVertex2f(45, 125);
    glVertex2f(45, 120);
    glEnd();

    // Núvem 3

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-100, 100);
    glVertex2f(-100, 110);
    glVertex2f(-70, 110);
    glVertex2f(-70, 100);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-110, 110);
    glVertex2f(-110, 120);
    glVertex2f(-80, 120);
    glVertex2f(-80, 110);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-100, 110);
    glVertex2f(-100, 130);
    glVertex2f(-90, 130);
    glVertex2f(-90, 110);
    glEnd();

    // Nuvem 4

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-140, 150);
    glVertex2f(-140, 160);
    glVertex2f(-60, 160);
    glVertex2f(-60, 150);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-140, 150);
    glVertex2f(-140, 140);
    glVertex2f(-120, 140);
    glVertex2f(-120, 150);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-135, 150);
    glVertex2f(-135, 170);
    glVertex2f(-120, 170);
    glVertex2f(-120, 150);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-115, 150);
    glVertex2f(-115, 190);
    glVertex2f(-80, 190);
    glVertex2f(-80, 150);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-80, 150);
    glVertex2f(-80, 140);
    glVertex2f(-65, 140);
    glVertex2f(-65, 150);
    glEnd();

}





void Desenha(void)
{
    // Limpa a janela de visualização com a cor branca
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_MULTISAMPLE);
    glEnable(GLUT_MULTISAMPLE);



    //figuraA();
    // figuraB();
    // figuraC();
    // figuraD();
    // figuraE();
    // figuraF();
    // figuraG();
    // figuraH();
    grafico();
    desenho();
 
    





    


    

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
    gluOrtho2D(-200,200,-200,200);
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
