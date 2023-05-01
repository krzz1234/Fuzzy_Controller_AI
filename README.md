# Fuzzy_Controller_AI

Instructions
Your task is mainly to design and implement a fuzzy controller (Zero-order Sugeno Fuzzy Inference System) for balancing an inverted pendulum system.  A written report detailing your system design and characterisation of its performance must accompany your program submission.

A start-up program using second-order derivative physics equations and the emulated BGI graphics library are provided, simulating the complete dynamics of the cart-pendulum system.  In addition, it also includes a function for collecting data points for plotting a control surface, and a fuzzy logic engine that you can utilise to implement a complete fuzzy controller.  A tutorial on how to use the engine is provided in the lecture slides (Lecture - 3.7 - Fuzzy Logic Engine - Inverted Pendulum.pptx – we discussed this in the lectures).   

Details of the requirements:

Part 1: Fuzzy System Design 

1.	Use the following inputs (you may combine several inputs together, as suggested in Yamakawa’s paper):
•	x – position of the cart
•	x_dot – horizontal velocity of the cart
•	theta – angle of the pole with respect to the vertical
•	theta_dot – angular velocity of the pole
2.	Write the fuzzy control rules.  
•	Depending on your controller design, you may take two of the inputs together to create a FAMM (Fuzzy Associative Memory Matrix).  
•	You may use multiple FAMMs, each with two inputs, or one big FAMM that uses all the inputs at once.
•	You can start by examining the fuzzy rules (based on Stephen Welstead’s book) used in the lectures for the inverted pendulum.  In the lecture slides, we have two FAMMs that were combined together to solve the balancing problem.  However, the fuzzy systems for the inverted pendulum described in the lectures need to be further improved, calibrated and tested.  
•	A better fuzzy controller design can be found in Takeshi Yamakawa’s paper, entitled “A Fuzzy Inference Engine in Nonlinear Analog Mode and Its Application to a Fuzzy Logic Control”.  Refer to page 517 of his paper to see what inputs were used in his design.  This research paper is available for download in our Stream website.

3.	Define the rule outputs associated with each of the fuzzy rules (e.g. NL = -40, PL = 40, etc.).  Note that we are implementing a Zero-Order Sugeno Fuzzy Inference System, and so the rule outputs are constants.

4.	Define the fuzzy sets corresponding to the linguistic terms in your fuzzy rules.  
•	The fuzzy sets need to be defined according to the range of possible values for the input variables.
•	Example:  Input range of input variables:
o	x:  [-2.4 – 2.4] meters
o	x_dot: [-4.5, 4.5] meters/second
o	angle: [-1.04, 1.04] radians
o	angle_dot: [-0.4, 0.4] radians/second

5.	Implement the fuzzy sets as membership functions in your program.  You may use any of the membership functions we discussed in class. (The fuzzy engine contains the implementation of trapezoidal membership functions, if you want to use it.)
6.	Define the defuzzification method for your system. (The fuzzy engine contains a centroid defuzzification method, if you want to use it.)
7.	Incorporate your fuzzy controller into the start-up program provided.  (Tips on where to insert codes are provided in the start-up codes)
8.	Note that in the start-up codes, there are blocks of statements that should not be modified as they are part of the implementation of the dynamics of the system.  There are comments in the codes that identify these blocks of codes.
9.	It is up to you to write and add any functions, classes or data structures that you may require to complete the system. 
10.	Your simulation system should demonstrate that the fuzzy controller is able to balance the inverted pendulum, given an initial pole angle and position. 

Part 2: System Calibration

11.	Calibrate your fuzzy controller by modifying the rules, shape of membership functions, etc. until it is able to balance the pendulum without exceeding the boundaries of the platform.  Aim for a control solution that can balance the pendulum in a smooth fashion and can bring the cart-pole system at the centre of the platform at zero degree angle with respect to the vertical axis.

Part 3: Results and Analysis

12.	Generate the control surface data points using void generateControlSurface().
•	The control surface comes with the following dimensions: angle of pole, angular velocity of pole, and Force calculated by the fuzzy controller. 
•	Calling generateControlSurface() will apply all the necessary physics equations to update the state of the world.  It will also store the data points into a text file (data_angle_vs_angle_dot.txt) that you can use later for 3D surface plotting using MS-Excel.
•	Note that a statement calling generateControlSurface() is already in place inside the main function
13.	Plot the control surface using MS-Excel.  Include the Excel file in your assignment submission.
•	MS-Excel requires a specific format for the tabulation of data points for 3D surface generation.  Therefore, to plot a 3D surface, make sure that you delete the first zero value on the first row (upper-left corner) of the data points in the worksheet.  The zero value is only there to align the columns properly, as required by the tabulation of data points by Excel.
14.	Test the fuzzy controller system by setting the initial angle of the pole with different values.  The bigger the initial angle is, the more challenging the problem becomes for the controller.  Record the maximum angle that your system can successfully handle.
1.	Characterise your control system by answering the following questions:
o	At x=1, what is the largest initial angle that your fuzzy controller can handle, without causing the cart-pole system to exceed the boundaries of the platform [-2.4m, 2.4m], and without dropping the pole on the ground?
	You can find the answer to this question by typing the initial angle of the pole on the command prompt window, then pressing the <Enter> key (this is already in place in the start-up codes).  The inverted pendulum simulation will run afterwards.
	Note that the program automatically converts the input angle to radians.
  

