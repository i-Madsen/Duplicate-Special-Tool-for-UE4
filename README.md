# Duplicate Special Tool for UE4
A plugin for the Unreal Engine 4 Editor for duplicating and laying out actors with specified transforms.


# Purpose of the tool: 

This tool is meant to be used with modular creation kits or blueprints that will require lots of replication to create a level. By using this tool, users can repeatedly duplicate objects with designated transforms and other duplication options rather than having to continuously duplicate and drag objects around the level. This tool will be most useful if the user knows the dimensions and measurements of the objects that will be duplicated since the user must input the desired values for transforms. 

# User Manual: 

Once the plugin has been enabled, navigate to its section in the ‘Modes’ tab of the editor. Then, select the actor(s) you would like to duplicate and select/input your desired duplication settings: 

Transform Options 

    Relative Translation – If enabled, adds a local space positional offset to the duplicated actor(s). Otherwise, adds a world space positional offset. 

    Relative Rotation – If enabled, adds local space rotation to the duplicated actor(s). Otherwise, adds world space rotation. 

    Relative Scale – If enabled, multiplies the relative scale of the duplicated actor(s). Otherwise, sets the scale of the actor(s). 

Duplication Options 

    Select Duplicated – If enabled, after the duplication process finishes the original actor(s) will be deselected and the newly duplicated actor(s) will be selected. 

    Create New Outliner Folder – If enabled, duplicated actors will be placed in the World Outliner under the given folder path name. 

    Note that if a folder with that path already exists, the actor(s) will be moved under that folder and no new folder will be created. 

    Also note that you can create new subfolders (e.g. MyFolder/MyNewSubfolder). 

    If enabled simultaneously with ‘Attach to Parent,’ the highest root object will be moved into the folder. 

    Attach to Parent – If enabled, attaches each duplicated actor to the actor it was duplicated from with a wielded simulated body. 

    Number of Copies – How many times to run the duplication process. 

    If enabled simultaneously with ‘Select Duplicated,’ the selection will be cleared and set to the newly duplicated actor(s) at the end of each cycle of the duplication loop which is useful when creating environment sections with high repitition (such as floors, walls, stairs, etc.). 

With all desired actors selected, options set, and values input, click the ‘Duplicate’ button to run the Duplicate Special tool. 

# Components of the Tool: 

GUI – This tool creates a new Editor Mode in the ‘Modes’ tab that uses checkboxes and number and text fields to take user input for duplication options. 

Duplication Functionality – The tool is written in C++ as an Editor Mode plugin. 

# Implementation: 

In the tool’s C++ code, it sets up the Editor Mode GUI using Unreal’s Slate API and then waits for the user to click on the ‘Duplicate’ button. Once the user clicks the button, the tool runs its core loop that grabs all the values chosen/input by the user and runs the appropriate functions based on the received options. The loop will run however many times the user designated the functions are defined in another file and namespace. 
