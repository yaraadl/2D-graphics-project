#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
float step = -20 ;
float step2 = -10 ;
void display();
void reshape(int w,int h);
void timer(int);
void init(){
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("19102749_19100683");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

void blueSky()
{
    glBegin(GL_POLYGON);  //the blue sky
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glVertex2f(10,4);
    glVertex2f(10,10);
    glVertex2f(-10,10);
    glVertex2f(-10,4);
    glEnd();
}

void greenbackground(){

    glBegin(GL_POLYGON);  //the green background
    glColor3f(0.0f, 0.7f, 0.0f);//Forest Green
    glVertex2f(10,-2);
    glVertex2f(10,4);
    glVertex2f(-10,4);
    glVertex2f(-10,-2);
    glEnd();

}
void sidewalk(){
    glBegin(GL_POLYGON);   // the sidewalk
    glColor3f(1,1,1);//white
    glVertex2f(10,-2);
    glVertex2f(10,-3);
    glVertex2f(-10,-3);
    glVertex2f(-10,-2);
    glEnd();

}

void street(){
    glBegin(GL_POLYGON); // the road
    glColor3f(0.3f, 0.3f, 0.3f);//Dark gray
    glVertex2f(10,-10);
    glVertex2f(10,-3);
    glVertex2f(-10,-3);
    glVertex2f(-10,-10);
    glEnd();
}

void sun(){
  glBegin(GL_POLYGON);  //the sun
  glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
  for(int i=0;i<360;i++){
     double angle = i*3.14/180 ;
     glVertex2f(1*cos(angle)-7,1.1*sin(angle)+8);
   }
  glEnd();
}
float angle =0 ;
void windmile(){

    //code to the main part of Windmill
    glColor3f(0,0,0); //black pole
    glBegin(GL_POLYGON);
    glVertex2f(7.4,-0.4);
    glVertex2f(7.4,6);
    glVertex2f(7.1,6);
    glVertex2f(7.1,-0.4);
    glEnd() ;
/////////////////////////////////////////////
    glLoadIdentity() ;
    glTranslatef(7.3,6,0) ;   //fixed point
    glRotatef(0+angle,0,0,1);
    glTranslatef(-7,-6,0) ;


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(7.3,6) ;
    glVertex2f(5.2,5) ;
    glVertex2f(5.2,7) ;
    glEnd();
//////////////////////////////////////////
    glLoadIdentity() ;
    glTranslatef(7.5,6,0) ;
    glRotatef(180+angle,0,0,1);
    glTranslatef(-7,-6,0) ;


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
     glVertex2f(7.3,6) ;
     glVertex2f(5.2,5) ;
     glVertex2f(5.2,7) ;
     glEnd();
///////////////////////////////////////////////
    glLoadIdentity() ;
    glTranslatef(7.3,6,0) ;
    glRotatef(90+angle,0,0,1);
    glTranslatef(-7,-6,0) ;


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(7.3,6) ;
    glVertex2f(5.2,5) ;
    glVertex2f(5.2,7) ;
    glEnd();


////////////////////////////////////////////
    glLoadIdentity() ;
    glTranslatef(7.3,6.1,0) ;
    glRotatef(-90+angle,0,0,1);
    glTranslatef(-7,-6,0) ;
    glColor3f(0,1,0) ;

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(7.3,6) ;
    glVertex2f(5.2,5) ;
    glVertex2f(5.2,7) ;
    glEnd();



}



void tree1(){
   glBegin(GL_POLYGON);  //the bottom of the tree
    glColor3f(0.4f, 0.0f, 0.0f);//Brown
    glVertex2f(5.2,-1);
    glVertex2f(5.2,3);
    glVertex2f(4.9,3);
    glVertex2f(4.9,-1);

    glEnd();

   glBegin(GL_POLYGON);     //the leaves
   glColor3f(0.0f, 0.6f, 0.0f);//Forest Green
   glVertex2f(6.1,0.2);
   glVertex2f(5.1,4);
   glVertex2f(4.1,0.2);


    glEnd();
}

void tree2(){
    glBegin(GL_POLYGON);  //the bottom of the tree
    glColor3f(0.4f, 0.0f, 0.0f);//Brown
    glVertex2f(-4.9,-1);
    glVertex2f(-4.9,3);
    glVertex2f(-5.2,3);
    glVertex2f(-5.2,-1);

    glEnd();

     glBegin(GL_POLYGON);  //the leaves of second tree
    glColor3f(0.0f, 0.6f, 0.0f);//Forest Green
    glVertex2f(-4.1,0.2);
     glVertex2f(-5.1,4);
    glVertex2f(-6.1,0.2);


   glEnd();

}

void streetlines(){
    glLineWidth(5.0);      //the line in the middle
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4,-6.9);
    glVertex2f(-4, -6.9);
    glEnd();

     glBegin(GL_LINES);     //the line in the right
    glColor3f(1,1,1);
    glVertex2f(10, -6.9);
    glVertex2f(8,-6.9);
    glEnd();

    glBegin(GL_LINES);  //the line in the left
    glColor3f(1,1,1);
    glVertex2f(-8,-6.9);
    glVertex2f(-10, -6.9);

    glEnd();
}

void home(){
    glBegin(GL_POLYGON);  //the  main rectangle of the home
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glVertex2f(3,-1);
    glVertex2f(3,3);
    glVertex2f(-3,3);
    glVertex2f(-3,-1);
    glEnd();
////////////////////////////////////////////////////////
    glBegin(GL_POLYGON);  //the left window
    glColor3f(0.1f, 0.2f, 0.2f);
    glVertex2f(0.8,-1);
    glVertex2f(0.8,2);
    glVertex2f(-0.8,2);
    glVertex2f(-0.8,-1);
    glEnd();

    glBegin(GL_POLYGON);  //the right window
   glColor3f(1.0f, 0.6f, 1.0f);
    glVertex2f(2.7,1);
    glVertex2f(2.7,2.7);
    glVertex2f(1.2,2.7);
    glVertex2f(1.2,1);
   glEnd();
///////////////////////////////////////////
    glBegin(GL_POLYGON);  //the door
    glColor3f(2.0f, 0.6f, 1.0f);
    glVertex2f(-1.2,1);
    glVertex2f(-1.2,2.7);
    glVertex2f(-2.7,2.7);
    glVertex2f(-2.7,1);
    glEnd();
/////////////////////////////////////////////////////////////
   glBegin(GL_POLYGON);  //roof
   glColor3f(2.0f, 0.6f, 1.0f);
   glVertex2f(3,3);
   glVertex2f(0,5);
   glVertex2f(-3,3);
   glEnd();

}

void car(){

    // code to draw main rectangle of the car
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);//blue
    glVertex2f(3+step2,-5);
    glVertex2f(3+step2,-2);
    glVertex2f(-3+step2,-2);
    glVertex2f(-3+step2,-5);

    glEnd();
    //////////////////////////////
    //code to draw the upper part of the car
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);//blue
    glVertex2f(2.25+step2,-2);
    glVertex2f(1.5+step2,-0.5);
    glVertex2f(-2+step2,-0.5);
    glVertex2f(-3+step2,-2);
    glEnd();

    /////////////////////////////////////////
    //code to draw the window
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white
    glVertex2f(1.75+step2,-2);
    glVertex2f(1.25+step2,-0.8);
    glVertex2f(-0.25+step2,-0.8);
    glVertex2f(-0.25+step2,-2);
    glEnd();

    //code to draw the window
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white
    glVertex2f(-0.5+step2,-2);
    glVertex2f(-0.5+step2,-0.8);
    glVertex2f(-1.9+step2,-0.8);
    glVertex2f(-2.5+step2,-2);

    glEnd();
    ///////////////////////////////////////
    // code to draw the lamp (small complete yellow circle)

    glBegin(GL_POLYGON);// to be  fully colored
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.29*cos(angle)+2.5+step2, 0.29*sin(angle)-3.3);
        }
glEnd();
//////////////////////////////////////////////////////
    // code to draw the first  wheel
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.77*cos(angle)+2+step2, 0.77*sin(angle)-5);
        }
        glEnd();
        /////////////////////////////////////////
        // code to draw the  second wheel
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.77*cos(angle)-2+step2, 0.77*sin(angle)-5);
        }
        glEnd();
        ///////////////////////////////////////////////

    //code to draw vertical line
            glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
            glPushMatrix();
            glColor3f(0,0,0);
            glBegin(GL_LINE_STRIP);
            glVertex2f(-0.35+step2,-2);
            glVertex2f(-0.35+step2,-4.56);
            glEnd();
            //////////////////////////////////////////
            //code to draw horizontal line
             glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
            glPushMatrix();
            glColor3f(0,0,0);
            glBegin(GL_LINE_STRIP);
            glVertex2f(1.7+step2,-3);
            glVertex2f(-2.8+step2,-3);
            glEnd();

}

void bus(){
        // code to draw main rectangle of the car
     glBegin(GL_POLYGON);
    glColor3f(1,0,0);//red
    glVertex2f(3+step,-6);
    glVertex2f(3+step,-1);
    glVertex2f(-3+step,-1);
    glVertex2f(-3+step,-6);

    glEnd();
    //////////////////////////////
    //code to draw first window
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white
    glVertex2f(2.5+step,-3);
    glVertex2f(2.5+step,-1.5);
    glVertex2f(1+step,-1.5);
    glVertex2f(1+step,-3);

    glEnd();
    /////////////////////////////////////////
    //code to draw second window
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white
    glVertex2f(0.5+step,-3);
    glVertex2f(0.5+step,-1.5);
    glVertex2f(-0.5+step,-1.5);
    glVertex2f(-0.5+step,-3);

    glEnd();
    ///////////////////////////////////////
    //code to draw third window
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white

    glVertex2f(-1+step,-3);
    glVertex2f(-1+step,-1.5);
    glVertex2f(-1.5+step,-1.5);
    glVertex2f(-1.5+step,-3);

    glEnd();
    /////////////////////////////////////
    //code to draw fourth window
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);//white
     glVertex2f(-2+step,-3);
    glVertex2f(-2+step,-1.5);
    glVertex2f(-2.5+step,-1.5);
    glVertex2f(-2.5+step,-3);

    glEnd();
    ////////////////////////////////
    // code to draw the frontal part of the bus (half circle)
     glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);

    for (int i =0; i<180; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(2.5*cos(angle)+1.5+step, 2.5*sin(angle)-6);
        }
glEnd();
///////////////////////////////////////////
// code to draw the lamp (small complete white circle)
glLineWidth(2);
    glBegin(GL_POLYGON);// to be  fully colored
   glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow

    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.25*cos(angle)+3.5+step, 0.25*sin(angle)-5.5);
        }
glEnd();
    /////////////////////////////////////
    // code to draw the first  wheel
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.75*cos(angle)+2+step, 0.75*sin(angle)-6);
        }
        glEnd();
        /////////////////////////////////////////
        // code to draw the  second wheel
        glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i =0; i<360; i++)
        {
        double angle = i* (3.14/180);

        glVertex2d(0.75*cos(angle)-2+step, 0.75*sin(angle)-6);
        }
        glEnd();

        ///////////////////////////////////////////////
        //code to draw vertical line
        glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
            glPushMatrix();
            glColor3f(0,0,0);
            glBegin(GL_LINE_STRIP);
            glVertex2f(0.8+step,-1.5);
            glVertex2f(0.8+step,-5);
            glEnd();
            //////////////////////////////////////////
            //code to draw horizontal line
             glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
            glPushMatrix();
            glColor3f(0,0,0);
            glBegin(GL_LINE_STRIP);
            glVertex2f(2.5+step,-4);
            glVertex2f(-2.5+step,-4);
            glEnd();

    }

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    blueSky();
    sun();
    greenbackground();
    sidewalk();
    street();
    tree1();
    tree2();
    streetlines();
    home();
    car();
    bus();
    windmile() ;

  glutSwapBuffers();

}


void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}


void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
	step+=0.1;     //the bus
	step2+=0.1;    //the blue car
    if(step>20){
      step=-20;
    }
     if(step2>30){
      step2=-10;
    }
     angle+=7 ;

}
