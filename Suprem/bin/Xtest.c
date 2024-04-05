  /* simple_scale.c -- demonstrate a few scale widgets. */
   #include <stdio.h>
   #include <Xm/Scale.h>
   #include <Xm/RowColumn.h>

   main(argc, argv)
   int argc;
   char *argv[];
   {
       Widget        toplevel, rowcol, scale;
       XtAppContext  app;
       void          new_value(); /* callback for Scale widgets */

       XtSetLanguageProc (NULL, NULL, NULL);

       toplevel = XtVaAppInitialize (&app, "Demos", NULL, 0,
           &argc, argv, NULL, NULL);

       rowcol = XtVaCreateWidget ("rowcol",
           xmRowColumnWidgetClass, toplevel,
           XmNorientation, XmHORIZONTAL,
           NULL);

       scale = XtVaCreateManagedWidget ("Days",
           xmScaleWidgetClass, rowcol,
           XtVaTypedArg, XmNtitleString, XmRString, "Days", 5,
           XmNmaximum,   7,
           XmNminimum,   1,
           XmNvalue,     1,
           XmNshowValue, True,
           NULL);
       XtAddCallback (scale, XmNvalueChangedCallback, new_value, NULL);

       scale = XtVaCreateManagedWidget ("Weeks",
           xmScaleWidgetClass, rowcol,
           XtVaTypedArg, XmNtitleString, XmRString, "Weeks", 6,
           XmNmaximum,   52,
           XmNminimum,   1,
           XmNvalue,     1,
           XmNshowValue, True,
           NULL);
       XtAddCallback (scale, XmNvalueChangedCallback, new_value, NULL);

       scale = XtVaCreateManagedWidget ("Months",
           xmScaleWidgetClass, rowcol,
           XtVaTypedArg, XmNtitleString, XmRString, "Months", 7,
           XmNmaximum,   12,
           XmNminimum,   1,
           XmNvalue,     1,
           XmNshowValue, True,
           NULL);
       XtAddCallback (scale, XmNvalueChangedCallback, new_value, NULL);

       scale = XtVaCreateManagedWidget ("Years",
           xmScaleWidgetClass, rowcol,
           XtVaTypedArg, XmNtitleString, XmRString, "Years", 6,
           XmNmaximum,   20,
           XmNminimum,   1,
           XmNvalue,     1,
           XmNshowValue, True,
           NULL);
       XtAddCallback (scale, XmNvalueChangedCallback, new_value, NULL);

       XtManageChild (rowcol);

       XtRealizeWidget (toplevel);
       XtAppMainLoop (app);
   }

   void
   new_value(scale_w, client_data, call_data)
   Widget scale_w;
   XtPointer client_data;
   XtPointer call_data;
   {
       XmScaleCallbackStruct *cbs = (XmScaleCallbackStruct *) call_data;

       printf("%s: %d\n", XtName(scale_w), cbs->value);
   }
