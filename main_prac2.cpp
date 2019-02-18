//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Zuno S�nchez Ricardo					******//
//*************	Pr�ctica #2								******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	/*glBegin(GL_POINTS);
		glPointSize(1000);
		glVertex3f(0.0f, 0.0f, 0.0f);
	glEnd();*/
	 //GL_LINES solo dibuja pares de vertices

	/*glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();*/

	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-7.0f, -7.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, -7.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-6.0f, -6.0f, 0.0f);
	glVertex3f(-7.0f, -6.0f, 0.0f);
	glVertex3f(-6.0f, -8.0f, 0.0f);
	glEnd();

	//Letra C
	glBegin(GL_POLYGON);
	glVertex3f(-10.0f, 9.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-9.5f, 8.5f, 0.0f);
	glVertex3f(-8.0f, 8.5f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-8.0f, 9.0f, 0.0f);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-10.0f, 9.0f, 0.0f);
	glVertex3f(-10.0f, 5.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-9.5f, 5.5f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-9.5f, 8.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-9.5f, 5.5f, 0.0f);
	glVertex3f(-8.0f, 5.5f, 0.0f); 
	glVertex3f(-8.0f, 5.0f, 0.0f);
	glVertex3f(-10.0f, 5.0f, 0.0f);	
	glEnd();

	//Letra G
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-6.0f, 9.0f, 0.0f);
	glVertex3f(-4.0f, 9.0f, 0.0f);
	glVertex3f(-4.0f, 8.5f, 0.0f);
	glVertex3f(-5.5f, 8.5f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 9.0f, 0.0f);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glVertex3f(-5.5f, 5.5f, 0.0f);
	glVertex3f(-5.5f, 8.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-5.5f, 5.5f, 0.0f);
	glVertex3f(-4.0f, 5.5f, 0.0f);
	glVertex3f(-4.0f, 5.0f, 0.0f);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 5.5f, 0.0f);
	glVertex3f(-4.0f, 7.5f, 0.0f);
	glVertex3f(-4.5f, 7.0f, 0.0f);
	glVertex3f(-4.5f, 5.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 7.5f, 0.0f);
	glVertex3f(-5.0f, 7.5f, 0.0f);
	glVertex3f(-5.0f, 7.0f, 0.0f);
	glVertex3f(-4.5f, 7.0f, 0.0f);
	glEnd();

	//letra Z:
	glBegin(GL_POLYGON);
	glVertex3f(-3.0f, 9.0f, 0.0f);
	glVertex3f(-1.0f, 9.0f, 0.0f);
	glVertex3f(-1.5f, 8.5f, 0.0f);
	glVertex3f(-3.0f, 8.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.5f, 8.5f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glVertex3f(-2.5f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 9.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-2.5f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 5.5f, 0.0f);
	glVertex3f(-2.5f, 5.5f, 0.0f);
	glEnd();

	//letra R:
     glBegin(GL_POLYGON);
     glVertex3f(-7.0f, 5.0f, 0.0f); 
     glVertex3f(-5.5f, 5.0f, 0.0f);
     glVertex3f(-5.5f, 4.7f, 0.0f); 
     glVertex3f(-6.7f, 4.7f, 0.0f);
     glVertex3f(-6.7f, 3.0f, 0.0f); 
     glVertex3f(-7.0f, 3.0f, 0.0f); 
     glEnd();
 
     glBegin(GL_POLYGON);
     glVertex3f(-5.8f, 4.0f, 0.0f);
     glVertex3f(-6.7f, 4.0f, 0.0f);
     glVertex3f(-6.7f, 3.7f, 0.0f);
     glVertex3f(-5.5f, 3.7f, 0.0f);
     glVertex3f(-5.5f, 4.7f, 0.0f);
     glVertex3f(-5.8f, 4.7f, 0.0f);
     glEnd();
 
     glBegin(GL_POLYGON);
     glVertex3f(-6.5f, 4.0f, 0.0f);
     glVertex3f(-5.5f, 3.3f, 0.0f);
     glVertex3f(-5.8f, 3.0f, 0.0f);
     glVertex3f(-6.5f, 3.7f, 0.0f);
     glEnd();
	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,10,-10,10,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut funci�n de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

