//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Zuno Sánchez Ricardo					******//
//*************	Práctica #2								******//
//*************	Visual Studio 2017						******//
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

	glBegin(GL_POLYGON);
	glVertex3f(-7.0f, -7.0f, 0.0f);
	glVertex3f(-6.0f, -7.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-6.0f, -6.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-7.0f, -6.0f, 0.0f);
	glVertex3f(-6.0f, -8.0f, 0.0f);
	glEnd();

	//Letra C
	glBegin(GL_POLYGON);
	glVertex3f(-10.0f, 9.0f, 0.0f);
	glColor3f(0.458f, 0.705f, 1.0f);
	glVertex3f(-9.5f, 8.5f, 0.0f);
	glVertex3f(-8.0f, 8.5f, 0.0f);
	glVertex3f(-8.0f, 9.0f, 0.0f);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(-10.0f, 9.0f, 0.0f);
	glVertex3f(-10.0f, 5.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-9.5f, 5.5f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-9.5f, 8.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-9.5f, 5.5f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.721f);
	glVertex3f(-8.0f, 5.5f, 0.0f); 
	glVertex3f(-8.0f, 5.0f, 0.0f);
	glVertex3f(-10.0f, 5.0f, 0.0f);	
	glEnd();

	//Letra G
	glBegin(GL_POLYGON);
	glVertex3f(-5.5f, 8.5f, 0.0f);
	glColor3f(0.0f, 0.011f, 0.721f);
	glVertex3f(-4.0f, 8.5f, 0.0f);
	glColor3f(1.0f, 0.423f, 0.141f);
	glVertex3f(-4.0f, 9.0f, 0.0f);
	glColor3f(0.133f, 0.0f, 0.525f);
	glVertex3f(-6.0f, 9.0f, 0.0f);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.721f);
	glBegin(GL_POLYGON);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glColor3f(0.0f, 0.011f, 0.721f);
	glVertex3f(-5.5f, 5.5f, 0.0f);
	glColor3f(1.0f, 0.423f, 0.141f);
	glVertex3f(-5.5f, 8.5f, 0.0f);
	glColor3f(0.133f, 0.0f, 0.525f);
	glVertex3f(-6.0f, 9.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glVertex3f(-4.0f, 5.0f, 0.0f);
	glVertex3f(-4.0f, 5.5f, 0.0f);
	glVertex3f(-5.5f, 5.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 5.5f, 0.0f);
	glColor3f(0.227f, 0.521f, 0.050f);
	glVertex3f(-4.0f, 7.5f, 0.0f);
	glVertex3f(-4.5f, 7.0f, 0.0f);
	glColor3f( 0.047f, 0.647f, 0.909f);
	glVertex3f(-4.5f, 5.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 7.5f, 0.0f);
	glVertex3f(-5.0f, 7.5f, 0.0f);
	glColor3f(0.909f, 0.5927f, 0.019f);
	glVertex3f(-5.0f, 7.0f, 0.0f);
	glVertex3f(-4.5f, 7.0f, 0.0f);
	glEnd();

	//letra Z:
	glBegin(GL_POLYGON);
	glVertex3f(-3.0f, 9.0f, 0.0f);
	glColor3f(0.486f, 0.286f, 0.686f);
	glVertex3f(-1.0f, 9.0f, 0.0f);
	glColor3f(0.317f, 0.749f, 1.0f);
	glVertex3f(-1.5f, 8.5f, 0.0f);
	glVertex3f(-3.0f, 8.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.686f, 0.227f, 0.498f);
	glVertex3f(-1.5f, 8.5f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glColor3f(1.0f, 0.890f, 0.227f);
	glVertex3f(-2.5f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 9.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-2.5f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 5.5f, 0.0f);
	glColor3f(0.615f, 0.254f, 0.909f);
	glVertex3f(-2.5f, 5.5f, 0.0f);
	glEnd();

	//letra S:
	glBegin(GL_POLYGON);
	glVertex3f(0.5f, 8.5f, 0.0f);
	glVertex3f(2.0f, 8.5f, 0.0f);
	glColor3f(0.360f, 0.686f, 0.345f);
	glVertex3f(2.0f, 9.0f, 0.0f);
	glVertex3f(0.0f, 9.0f, 0.0f);
	glColor3f(0.392f, 0.713f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.909f, 0.643f, 0.239f);
	glVertex3f(0.0f, 7.0f, 0.0f);
	glVertex3f(0.5f, 7.5f, 0.0f);
	glVertex3f(0.5f, 8.5f, 0.0f);
	glColor3f(0.011f, 0.282f, 0.823f);
	glVertex3f(0.0f, 9.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.5f, 7.5f, 0.0f);
	glVertex3f(2.0f, 7.5f, 0.0f);
	glVertex3f(1.5f, 7.0f, 0.0f);
	glColor3f(0.500f, 0.432f, 0.125f);
	glVertex3f(0.0f, 7.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(2.0f, 7.5f, 0.0f);
	glVertex3f(1.5f, 7.0f, 0.0f);
	glColor3f(0.28f, 0.932f, 0.321f);
	glVertex3f(1.5f, 5.5f, 0.0f);
	glVertex3f(2.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.5f, 5.5f, 0.0f);
	glVertex3f(2.0f, 5.0f, 0.0f);
	glVertex3f(0.0f, 5.0f, 0.0f);
	glColor3f(0.293f, 0.209f, 0.348f);
	glVertex3f(0.0f, 5.5f, 0.0f);
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
  glutInitWindowSize  (800, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

