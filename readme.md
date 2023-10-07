# Keypad

A simple class for managing row/column keypads. We set the rows to input (pulled high) and then alternately engage the columns as outputs (low). If the row pins register low, then we know a key was pressed.

This class doesn't check to see if two keys are pressed at the same time.

It returns the key pressed, but it does not return repeats (i.e., if you hold a key down, you'll only get one response).

## Hardware

There is an example keypad in docs. Specific keypads can be created as derived classes.