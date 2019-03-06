//Semestre 2019 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Zuno Sánchez Ricardo					******//
//*************	Práctica #4								******//
//*************	Visual Studio 2017						******//

#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float transY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angY = 0.0;
float angX = 0.0;

void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glColor3f(1.0, 1.5, 0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glColor3f(0.8, 0.2, 0.4);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glColor3f(0.4, 0.2, 0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glColor3f(0.0, 0.0, 1.0);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
		
		glTranslatef(transX, transY, transZ);
		glRotatef(angY, 0, 1, 0);
		glRotatef(angX, 1, 0, 0);
		//Poner Código Aquí.	
		glTranslatef(-3.0, 0.0, 0.0);
		prisma();
		glScalef(3.0, 3.0, 3.0);
		glTranslatef(3.0, 0.0, 0.0);		
		glRotatef(-90, 1, 0, 0);
		prisma();

		glTranslatef(1.0, 0.0, 0.0);
		glRotatef(90, 0, 0, 1);
		prisma();
  		
		glTranslatef(0.0, -1.0, 0.0);
		glRotatef(90, 0, 1, 0);
		prisma();

		glScalef(0.7, 0.7, 0.7);
		glTranslatef(-1.2, 1.0, 0.0);
		glRotatef(180, 1, 0, 0);
		prisma();

		glTranslatef(0.0, -1.0, 0.0);
		glRotatef(-90, 0, 1, 0);
		prisma();

		glScalef(0.4, 0.4, 0.4);
		glTranslatef(0.0, 1.2, 1.7);
		glRotatef(-90, 0, 0, 1);
		prisma();
  glutSwapBuffers ( );
  // Swap The Buffers
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.3f;
			break;
		case 's':
		case 'S':
			transZ -= 0.3f;
			break;
		case 'a':
		case 'A':
			transX -= 0.2f;
			printf("Posicion en X: %f\n", transX);
			break;
		case 'd':
		case 'D':
			transX += 0.2f;
			printf("Posicion en X: %f\n", transX);
			break;
		case 'e':
		case 'E':
			transY += 0.2f;
			printf("Posicion en Y: %f\n", transY);
			break;
		case 'q':
		case 'Q':
			transY -= 0.2f;
			printf("Posicion en Y: %f\n", transY);
			break;
		case 27:        // Cuando Esc es presionado...
			exit(0);   // Salimos del programa
			break;
		default:        // Cualquier otra
			break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
  case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
	  angX += 5.0f;
	  break;
  case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
	  angX -= 5.0f;
	  break;
  case GLUT_KEY_LEFT:
	  angY += 5.0f;
	  break;
  case GLUT_KEY_RIGHT:
	  angY -= 5.0f;
	  break;
  default:
	  break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}
