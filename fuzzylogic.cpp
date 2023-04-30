#include <algorithm>
#include "fuzzylogic.h"

/////////////////////////////////////////////////////////////////

//Initialise Fuzzy Rules

void initFuzzyRules(fuzzy_system_rec *fl) {
	
   const int
      no_of_x_rules = 25,
      no_of_theta_rules = 25;
   
   int i;
	
//---------------------------------------------------------------------------- 	
//THETA vs. THETA_DOT	
//  
   
   for (i = 0;i < no_of_theta_rules;i++) {
       fl->rules[i].inp_index[0] = in_theta;
       fl->rules[i].inp_index[1] = in_theta_dot;
   }
   
    
   /* Regions for theta and theta_dot: */
   //sample only
   // fl->rules[0].inp_fuzzy_set[0] = in_nl;
   // fl->rules[0].inp_fuzzy_set[1] = in_nl;
   
   fl->rules[0].inp_fuzzy_set[0] = in_ns;
   fl->rules[0].inp_fuzzy_set[1] = in_ns;
   fl->rules[0].out_fuzzy_set = out_nl;

   fl->rules[1].inp_fuzzy_set[0] = in_ns;
   fl->rules[1].inp_fuzzy_set[1] = in_ze;
   fl->rules[1].out_fuzzy_set = out_nl;

   fl->rules[2].inp_fuzzy_set[0] = in_ns;
   fl->rules[2].inp_fuzzy_set[1] = in_ps;
   fl->rules[2].out_fuzzy_set = out_nl;

   fl->rules[3].inp_fuzzy_set[0] = in_ze;
   fl->rules[3].inp_fuzzy_set[1] = in_ns;
   fl->rules[3].out_fuzzy_set = out_ze;

   fl->rules[4].inp_fuzzy_set[0] = in_ze;
   fl->rules[4].inp_fuzzy_set[1] = in_ze;
   fl->rules[4].out_fuzzy_set = out_ze;

   fl->rules[5].inp_fuzzy_set[0] = in_ze;
   fl->rules[5].inp_fuzzy_set[1] = in_ps;
   fl->rules[5].out_fuzzy_set = out_ze;

   fl->rules[6].inp_fuzzy_set[0] = in_ps;
   fl->rules[6].inp_fuzzy_set[1] = in_ns;
   fl->rules[6].out_fuzzy_set = out_pl;

   fl->rules[7].inp_fuzzy_set[0] = in_ps;
   fl->rules[7].inp_fuzzy_set[1] = in_ze;
   fl->rules[7].out_fuzzy_set = out_pl;

   fl->rules[8].inp_fuzzy_set[0] = in_ps;
   fl->rules[8].inp_fuzzy_set[1] = in_ps;
   fl->rules[8].out_fuzzy_set = out_pl;

   fl->rules[9].inp_fuzzy_set[0] = in_nl;
   fl->rules[9].inp_fuzzy_set[1] = in_nl;
   fl->rules[9].out_fuzzy_set = out_nvl;

   fl->rules[10].inp_fuzzy_set[0] = in_nl;
   fl->rules[10].inp_fuzzy_set[1] = in_ns;
   fl->rules[10].out_fuzzy_set = out_nvl;

   fl->rules[11].inp_fuzzy_set[0] = in_nl;
   fl->rules[11].inp_fuzzy_set[1] = in_ze;
   fl->rules[11].out_fuzzy_set = out_nl;

   fl->rules[12].inp_fuzzy_set[0] = in_nl;
   fl->rules[12].inp_fuzzy_set[1] = in_ps;
   fl->rules[12].out_fuzzy_set = out_nl;

   fl->rules[13].inp_fuzzy_set[0] = in_nl;
   fl->rules[13].inp_fuzzy_set[1] = in_pl;
   fl->rules[13].out_fuzzy_set = out_nvl;

   fl->rules[14].inp_fuzzy_set[0] = in_pl;
   fl->rules[14].inp_fuzzy_set[1] = in_nl;
   fl->rules[14].out_fuzzy_set = out_pl;

   fl->rules[15].inp_fuzzy_set[0] = in_pl;
   fl->rules[15].inp_fuzzy_set[1] = in_ns;
   fl->rules[15].out_fuzzy_set = out_pl;

   fl->rules[16].inp_fuzzy_set[0] = in_pl;
   fl->rules[16].inp_fuzzy_set[1] = in_ze;
   fl->rules[16].out_fuzzy_set = out_pl;

   fl->rules[17].inp_fuzzy_set[0] = in_pl;
   fl->rules[17].inp_fuzzy_set[1] = in_ps;
   fl->rules[17].out_fuzzy_set = out_pvl;

   fl->rules[18].inp_fuzzy_set[0] = in_pl;
   fl->rules[18].inp_fuzzy_set[1] = in_pl;
   fl->rules[18].out_fuzzy_set = out_pvl;

   fl->rules[19].inp_fuzzy_set[0] = in_ns;
   fl->rules[19].inp_fuzzy_set[1] = in_nl;
   fl->rules[19].out_fuzzy_set = out_nvl;

   fl->rules[20].inp_fuzzy_set[0] = in_ze;
   fl->rules[20].inp_fuzzy_set[1] = in_nl;
   fl->rules[20].out_fuzzy_set = out_ze;

   fl->rules[21].inp_fuzzy_set[0] = in_ps;
   fl->rules[21].inp_fuzzy_set[1] = in_nl;
   fl->rules[21].out_fuzzy_set = out_pl;
   
   fl->rules[22].inp_fuzzy_set[0] = in_ns;
   fl->rules[22].inp_fuzzy_set[1] = in_pl;
   fl->rules[22].out_fuzzy_set = out_nl;

   fl->rules[23].inp_fuzzy_set[0] = in_ze;
   fl->rules[23].inp_fuzzy_set[1] = in_pl;
   fl->rules[23].out_fuzzy_set = out_ze;

   fl->rules[24].inp_fuzzy_set[0] = in_ps;
   fl->rules[24].inp_fuzzy_set[1] = in_pl;
   fl->rules[24].out_fuzzy_set = out_pvl;
	
	
//----------------------------------------------------------------------------   
//X vs. X_DOT
//
   
   for (i = 0;i < no_of_x_rules;i++) {
   	  fl->rules[i + no_of_theta_rules].inp_index[0] = in_x;
   	  fl->rules[i + no_of_theta_rules].inp_index[1] = in_x_dot;
	}
	  
	/* Regions for x and x_dot: */
   //sample only
   // fl->rules[25+0].inp_fuzzy_set[0] = in_nl;
   // fl->rules[25+0].inp_fuzzy_set[1] = in_nl;
   
   fl->rules[25+0].inp_fuzzy_set[0] = in_nl;
   fl->rules[25+0].inp_fuzzy_set[1] = in_nl;
   fl->rules[25+0].out_fuzzy_set = out_nm;

   fl->rules[25 + 1].inp_fuzzy_set[0] = in_nl;
   fl->rules[25 + 1].inp_fuzzy_set[1] = in_ns;
   fl->rules[25 + 1].out_fuzzy_set = out_pvl;

   fl->rules[25 + 2].inp_fuzzy_set[0] = in_nl;
   fl->rules[25 + 2].inp_fuzzy_set[1] = in_ze;
   fl->rules[25 + 2].out_fuzzy_set = out_pvl;

   fl->rules[25 + 3].inp_fuzzy_set[0] = in_nl;
   fl->rules[25 + 3].inp_fuzzy_set[1] = in_ps;
   fl->rules[25 + 3].out_fuzzy_set = out_pvl;

   fl->rules[25 + 4].inp_fuzzy_set[0] = in_nl;
   fl->rules[25 + 4].inp_fuzzy_set[1] = in_pl;
   fl->rules[25 + 4].out_fuzzy_set = out_pvl;

   fl->rules[25 + 5].inp_fuzzy_set[0] = in_ns;
   fl->rules[25 + 5].inp_fuzzy_set[1] = in_nl;
   fl->rules[25 + 5].out_fuzzy_set = out_nm;

   fl->rules[25 + 6].inp_fuzzy_set[0] = in_ns;
   fl->rules[25 + 6].inp_fuzzy_set[1] = in_ns;
   fl->rules[25 + 6].out_fuzzy_set = out_nm;

   fl->rules[25 + 7].inp_fuzzy_set[0] = in_ns;
   fl->rules[25 + 7].inp_fuzzy_set[1] = in_ze;
   fl->rules[25 + 7].out_fuzzy_set = out_nm;

   fl->rules[25 + 8].inp_fuzzy_set[0] = in_ns;
   fl->rules[25 + 8].inp_fuzzy_set[1] = in_ps;
   fl->rules[25 + 8].out_fuzzy_set = out_nm;

   fl->rules[25 + 9].inp_fuzzy_set[0] = in_ns;
   fl->rules[25 + 9].inp_fuzzy_set[1] = in_pl;
   fl->rules[25 + 9].out_fuzzy_set = out_nm;

   fl->rules[25 + 10].inp_fuzzy_set[0] = in_ze;
   fl->rules[25 + 10].inp_fuzzy_set[1] = in_nl;
   fl->rules[25 + 10].out_fuzzy_set = out_ze;

   fl->rules[25 + 11].inp_fuzzy_set[0] = in_ze;
   fl->rules[25 + 11].inp_fuzzy_set[1] = in_ns;
   fl->rules[25 + 11].out_fuzzy_set = out_ze;

   fl->rules[25 + 12].inp_fuzzy_set[0] = in_ze;
   fl->rules[25 + 12].inp_fuzzy_set[1] = in_ze;
   fl->rules[25 + 12].out_fuzzy_set = out_ze;

   fl->rules[25 + 13].inp_fuzzy_set[0] = in_ze;
   fl->rules[25 + 13].inp_fuzzy_set[1] = in_ps;
   fl->rules[25 + 13].out_fuzzy_set = out_ze;

   fl->rules[25 + 14].inp_fuzzy_set[0] = in_ze;
   fl->rules[25 + 14].inp_fuzzy_set[1] = in_pl;
   fl->rules[25 + 14].out_fuzzy_set = out_ze;

   fl->rules[25 + 15].inp_fuzzy_set[0] = in_ps;
   fl->rules[25 + 15].inp_fuzzy_set[1] = in_nl;
   fl->rules[25 + 15].out_fuzzy_set = out_pm;

   fl->rules[25 + 16].inp_fuzzy_set[0] = in_ps;
   fl->rules[25 + 16].inp_fuzzy_set[1] = in_ns;
   fl->rules[25 + 16].out_fuzzy_set = out_pm;

   fl->rules[25 + 17].inp_fuzzy_set[0] = in_ps;
   fl->rules[25 + 17].inp_fuzzy_set[1] = in_ze;
   fl->rules[25 + 17].out_fuzzy_set = out_pm;

   fl->rules[25 + 18].inp_fuzzy_set[0] = in_ps;
   fl->rules[25 + 18].inp_fuzzy_set[1] = in_ps;
   fl->rules[25 + 18].out_fuzzy_set = out_pm;

   fl->rules[25 + 19].inp_fuzzy_set[0] = in_ps;
   fl->rules[25 + 19].inp_fuzzy_set[1] = in_pl;
   fl->rules[25 + 19].out_fuzzy_set = out_pm;

   fl->rules[25 + 20].inp_fuzzy_set[0] = in_pl;
   fl->rules[25 + 20].inp_fuzzy_set[1] = in_nl;
   fl->rules[25 + 20].out_fuzzy_set = out_nvl;

   fl->rules[25 + 21].inp_fuzzy_set[0] = in_pl;
   fl->rules[25 + 21].inp_fuzzy_set[1] = in_ns;
   fl->rules[25 + 21].out_fuzzy_set = out_nvl;

   fl->rules[25 + 22].inp_fuzzy_set[0] = in_pl;
   fl->rules[25 + 22].inp_fuzzy_set[1] = in_ze;
   fl->rules[25 + 22].out_fuzzy_set = out_nvl;

   fl->rules[25 + 23].inp_fuzzy_set[0] = in_pl;
   fl->rules[25 + 23].inp_fuzzy_set[1] = in_ps;
   fl->rules[25 + 23].out_fuzzy_set = out_nvl;

   fl->rules[25 + 24].inp_fuzzy_set[0] = in_pl;
   fl->rules[25 + 24].inp_fuzzy_set[1] = in_pl;
   fl->rules[25 + 24].out_fuzzy_set = out_nvl;
   
   //and so on, and so forth...

   // fl->rules[25+24].out_fuzzy_set = out_nl;

   // Yamazaka

   /*
   for (i = 0;i < 13;i++) {
       fl->rules[i + 50].inp_index[0] = INPUT_X;
       fl->rules[i + 50].inp_index[1] = INPUT_Y;
   }

   fl->rules[50].inp_fuzzy_set[0] = in_nl;
   fl->rules[50].inp_fuzzy_set[1] = in_pl;
   fl->rules[50].out_fuzzy_set = out_ns;

   fl->rules[51].inp_fuzzy_set[0] = in_nl;
   fl->rules[51].inp_fuzzy_set[1] = in_ze;
   fl->rules[51].out_fuzzy_set = out_nm;

   fl->rules[52].inp_fuzzy_set[0] = in_nl;
   fl->rules[52].inp_fuzzy_set[1] = in_nl;
   fl->rules[52].out_fuzzy_set = out_nl;

   fl->rules[53].inp_fuzzy_set[0] = in_ns;
   fl->rules[53].inp_fuzzy_set[1] = in_ps;
   fl->rules[53].out_fuzzy_set = out_ns;

   fl->rules[54].inp_fuzzy_set[0] = in_ns;
   fl->rules[54].inp_fuzzy_set[1] = in_ns;
   fl->rules[54].out_fuzzy_set = out_nm;

   fl->rules[55].inp_fuzzy_set[0] = in_ze;
   fl->rules[55].inp_fuzzy_set[1] = in_pl;
   fl->rules[55].out_fuzzy_set = out_ps;

   fl->rules[56].inp_fuzzy_set[0] = in_ze;
   fl->rules[56].inp_fuzzy_set[1] = in_ze;
   fl->rules[56].out_fuzzy_set = out_ze;

   fl->rules[57].inp_fuzzy_set[0] = in_ze;
   fl->rules[57].inp_fuzzy_set[1] = in_nl;
   fl->rules[57].out_fuzzy_set = out_ns;

   fl->rules[58].inp_fuzzy_set[0] = in_ps;
   fl->rules[58].inp_fuzzy_set[1] = in_ps;
   fl->rules[58].out_fuzzy_set = out_pm;

   fl->rules[59].inp_fuzzy_set[0] = in_ps;
   fl->rules[59].inp_fuzzy_set[1] = in_ns;
   fl->rules[59].out_fuzzy_set = out_ps;

   fl->rules[60].inp_fuzzy_set[0] = in_pl;
   fl->rules[60].inp_fuzzy_set[1] = in_pl;
   fl->rules[60].out_fuzzy_set = out_pl;

   fl->rules[61].inp_fuzzy_set[0] = in_pl;
   fl->rules[61].inp_fuzzy_set[1] = in_ze;
   fl->rules[61].out_fuzzy_set = out_pm;

   fl->rules[62].inp_fuzzy_set[0] = in_pl;
   fl->rules[62].inp_fuzzy_set[1] = in_nl;
   fl->rules[62].out_fuzzy_set = out_ps;
   */
      return;
}


void initMembershipFunctions(fuzzy_system_rec *fl) {
	
   /* The X membership functions */

   //Sample routines only, to give you an idea of what to do here
  	//~ fl->inp_mem_fns[in_x][in_neg] = init_trapz (-1.5,-0.5,0,0,left_trapezoid);
   //~ fl->inp_mem_fns[in_x][in_ze] = init_trapz (-1.5,-0.5,0.5,1.5,regular_trapezoid);
   //~ fl->inp_mem_fns[in_x][in_pos] = init_trapz (0.5,1.5,0,0,right_trapezoid);
	
   /* The X dot membership functions */
   //enter the appropriate membership function initialisations here 

   /* The theta membership functions */
   //enter the appropriate membership function initialisations here
  	
   /* The theta dot membership functions */
   //enter the appropriate membership function initialisations here
  	
    /* The Yamazaka  
    fl->inp_mem_fns[INPUT_X][in_nl] = init_trapz(0, 0, -0.8, -1.5, left_trapezoid);
    fl->inp_mem_fns[INPUT_X][in_ns] = init_trapz(-1.5, -0.8, -0.8, 0, regular_trapezoid);
    fl->inp_mem_fns[INPUT_X][in_ze] = init_trapz(-0.8, 0, 0, 0.8, regular_trapezoid);
    fl->inp_mem_fns[INPUT_X][in_ps] = init_trapz(0, 0.8, 0.8, 1.5, regular_trapezoid);
    fl->inp_mem_fns[INPUT_X][in_pl] = init_trapz(0.8, 1.5, 0, 0, right_trapezoid);

    fl->inp_mem_fns[INPUT_Y][in_nl] = init_trapz(0, 0, -0.8, -1.5, left_trapezoid);
    fl->inp_mem_fns[INPUT_Y][in_ns] = init_trapz(-1.5, -0.8, -0.8, 0, regular_trapezoid);
    fl->inp_mem_fns[INPUT_Y][in_ze] = init_trapz(-0.8, 0, 0, 0.8, regular_trapezoid);
    fl->inp_mem_fns[INPUT_Y][in_ps] = init_trapz(0, 0.8, 0.8, 1.5, regular_trapezoid);
    fl->inp_mem_fns[INPUT_Y][in_pl] = init_trapz(0.8, 1.5, 0, 0, right_trapezoid);
    */
    /* The X membership functions */
    fl->inp_mem_fns[in_x][in_nl] = init_trapz(-1.5, -1, 0, 0, left_trapezoid);
    fl->inp_mem_fns[in_x][in_ns] = init_trapz(-1.5, -0.8, -0.8, -0.1, regular_trapezoid);
    fl->inp_mem_fns[in_x][in_ze] = init_trapz(-0.6, 0.00, 0.00, 0.6, regular_trapezoid);
    fl->inp_mem_fns[in_x][in_ps] = init_trapz(0.1, 0.8, 0.8, 1.5, regular_trapezoid);
    fl->inp_mem_fns[in_x][in_pl] = init_trapz(1, 1.5, 0, 0, right_trapezoid);
    //Sample routines only, to give you an idea of what to do here
     //~ fl->inp_mem_fns[in_x][in_neg] = init_trapz (-1.5,-0.5,0,0,left_trapezoid);
    //~ fl->inp_mem_fns[in_x][in_ze] = init_trapz (-1.5,-0.5,0.5,1.5,regular_trapezoid);
    //~ fl->inp_mem_fns[in_x][in_pos] = init_trapz (0.5,1.5,0,0,right_trapezoid);

    /* The X dot membership functions */
    //enter the appropriate membership function initialisations here
    fl->inp_mem_fns[in_x_dot][in_nl] = init_trapz(-3, -2, 0, 0, left_trapezoid);
    fl->inp_mem_fns[in_x_dot][in_ns] = init_trapz(-3, -1.6, -1.6, -0.2, regular_trapezoid);
    fl->inp_mem_fns[in_x_dot][in_ze] = init_trapz(-1.2, 0, 0, 1.2, regular_trapezoid);
    fl->inp_mem_fns[in_x_dot][in_ps] = init_trapz(0.2, 1.6, 1.6, 3, regular_trapezoid);
    fl->inp_mem_fns[in_x_dot][in_ps] = init_trapz(2, 3, 0, 0, right_trapezoid);

    /* The theta membership functions */
    //enter the appropriate membership function initialisations here
    fl->inp_mem_fns[in_theta][in_nl] = init_trapz(-0.8, -0.4, 0, 0, left_trapezoid);
    fl->inp_mem_fns[in_theta][in_ns] = init_trapz(-0.8, -0.4, -0.4, 0, regular_trapezoid);
    fl->inp_mem_fns[in_theta][in_ze] = init_trapz(-0.4, 0, 0, 0.4, regular_trapezoid);
    fl->inp_mem_fns[in_theta][in_ps] = init_trapz(0, 0.4, 0.4, 0.8, regular_trapezoid);
    fl->inp_mem_fns[in_theta][in_pl] = init_trapz(0.4, 0.8, 0, 0, right_trapezoid);

    /* The theta dot membership functions */
    //enter the appropriate membership function initialisations here
    fl->inp_mem_fns[in_theta_dot][in_nl] = init_trapz(-0.3, -0.15, 0, 0, left_trapezoid);
    fl->inp_mem_fns[in_theta_dot][in_ns] = init_trapz(-0.3, -0.15, -0.15, 0, regular_trapezoid);
    fl->inp_mem_fns[in_theta_dot][in_ze] = init_trapz(-0.15, 0, 0, 0.15, regular_trapezoid);
    fl->inp_mem_fns[in_theta_dot][in_ps] = init_trapz(0, 0.15, 0.15, 0.3, regular_trapezoid);
    fl->inp_mem_fns[in_theta_dot][in_pl] = init_trapz(0.15, 0.3, 0, 0, right_trapezoid);
	
	
   return;
}

void initFuzzySystem (fuzzy_system_rec *fl) {

   //Note: The settings of these parameters will depend upon your fuzzy system design
   fl->no_of_inputs = 2;  /* Inputs are handled 2 at a time only */
   fl->no_of_rules = 50;
   fl->no_of_inp_regions = 5;
   fl->no_of_outputs = 9;
	
   coefficient_A=1.0;
   coefficient_B=1.0;
   coefficient_C=1.0;
   coefficient_D=1.0;
	
	//Sample only
	// fl->output_values [out_nvl]=-95.0;
	// fl->output_values [out_nl] = -85.0;
   
   fl->output_values[out_nvl] = -300.0f;
   fl->output_values[out_nl] = -200.0f;
   fl->output_values[out_nm] = -100.0f;
   fl->output_values[out_ns] = -55.0f;
   fl->output_values[out_ze] = 0;
   fl->output_values[out_ps] = 55.0f;
   fl->output_values[out_pm] = 100.0f;
   fl->output_values[out_pl] = 200.0f;
   fl->output_values[out_pvl] = 300.0f;
   

   fl->rules = (rule *) malloc ((size_t)(fl->no_of_rules*sizeof(rule)));
   initFuzzyRules(fl);
   initMembershipFunctions(fl);
   return;
}

//////////////////////////////////////////////////////////////////////////////

trapezoid init_trapz (float x1,float x2,float x3,float x4, trapz_type typ) {
	
   trapezoid trz;
   trz.a = x1;
   trz.b = x2;
   trz.c = x3;
   trz.d = x4;
   trz.tp = typ;
   switch (trz.tp) {
	   
      case regular_trapezoid:
         	 trz.l_slope = 1.0/(trz.b - trz.a);
         	 trz.r_slope = 1.0/(trz.c - trz.d);
         	 break;
	 
      case left_trapezoid:
         	 trz.r_slope = 1.0/(trz.a - trz.b);
         	 trz.l_slope = 0.0;
         	 break;
	 
      case right_trapezoid:
         	 trz.l_slope = 1.0/(trz.b - trz.a);
         	 trz.r_slope = 0.0;
         	 break;
   }  /* end switch  */
   
   return trz;
}  /* end function */

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
float trapz (float x, trapezoid trz) {
   switch (trz.tp) {
	   
      case left_trapezoid:
         	 if (x <= trz.a)
         	    return 1.0;
         	 if (x >= trz.b)
         	    return 0.0;
         	 /* a < x < b */
         	 return trz.r_slope * (x - trz.b);
	 
	 
      case right_trapezoid:
         	 if (x <= trz.a)
         	    return 0.0;
         	 if (x >= trz.b)
         	    return 1.0;
         	 /* a < x < b */
         	 return trz.l_slope * (x - trz.a);
	 
      case regular_trapezoid:
         	 if ((x <= trz.a) || (x >= trz.d))
         	    return 0.0;
         	 if ((x >= trz.b) && (x <= trz.c))
         	    return 1.0;
         	 if ((x >= trz.a) && (x <= trz.b))
         	    return trz.l_slope * (x - trz.a);
         	 if ((x >= trz.c) && (x <= trz.d))
         	    return  trz.r_slope * (x - trz.d);
         	    
	 }  /* End switch  */
	 
   return 0.0;  /* should not get to this point */
}  /* End function */

//////////////////////////////////////////////////////////////////////////////
float min_of(float values[],int no_of_inps) {
   int i;
   float val;
   val = values [0];
   for (i = 1;i < no_of_inps;i++) {
       if (values[i] < val)
	  val = values [i];
   }
   return val;
}



//////////////////////////////////////////////////////////////////////////////
float fuzzy_system (float inputs[],fuzzy_system_rec fz) {
   int i,j;
   short variable_index,fuzzy_set;
   float sum1 = 0.0,sum2 = 0.0,weight;
   float m_values[MAX_NO_OF_INPUTS];
	
   
   for (i = 0;i < fz.no_of_rules;i++) {
      for (j = 0;j < fz.no_of_inputs;j++) {
	   variable_index = fz.rules[i].inp_index[j];
	   fuzzy_set = fz.rules[i].inp_fuzzy_set[j];
	   m_values[j] = trapz(inputs[variable_index],
	       fz.inp_mem_fns[variable_index][fuzzy_set]);
	   } /* end j  */
      
       weight = min_of (m_values,fz.no_of_inputs);
				
       sum1 += weight * fz.output_values[fz.rules[i].out_fuzzy_set];
       sum2 += weight;
   } /* end i  */
 
	
	if (fabs(sum2) < TOO_SMALL) {
      cout << "\r\nFLPRCS Error: Sum2 in fuzzy_system is 0.  Press key: " << endl;
      //~ getch();
      //~ exit(1);
      return 0.0;
   }
   
   return (sum1/sum2);
}  /* end fuzzy_system  */

//////////////////////////////////////////////////////////////////////////////
void free_fuzzy_rules (fuzzy_system_rec *fz) {
   if (fz->allocated){
	   free (fz->rules);
	}
	
   fz->allocated = false;
   return;
}

