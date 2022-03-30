# Group assignment: wall follower
This is your second group assignment. Please follow the exact instructions
below to receive full points. It is important that you create > 10
commits for each demonstration. ** If you copy and paste code, and push it with
a single commit, you risk earning a low grade. ** Individual and group grades may vary.

## Background
Your IR distance sensor has three pins (signal, GND, and VCC (+5V)). Connect the signal pin of your
IR distance sensor to pin A0 on your 32U4 control board, as shown in the Figure below. Your sonar distance
sensor has four pins (VCC (+5V), TRIG, ECHO, and GND). Connect the TRIG to pin 0, and ECHO
pin to pin 1 on your 32U4 control board as shown in the Figure below. The IR and sonar distance sensors
operate at 5V. Therefore, connect 5V and GND to the pins as indicated in the Figure below.




## Step 1: each team member: clone this repository to your computer
Clone this repository to your local machine.
```
git clone <PASTE THE REPO ADDRESS HERE>
```
## Step 2: each team member: open the cloned project in VS Code
Open the repository that you just cloned in MS Visual Studio Code. Your Platform IO plugin should be working at this stage.

## Step 3: each team member: upload the program to your Romi
Once uploaded, your Romi should output "Robot idle" in your terminal. After you press button A 
on your Romi board, this message should change to "Distance measurement". Essentially, you are provided
with an example of a simple state machine, which you can use for your individual
and group assignments. Try to understand the implementation of the state machine, before
proceeding to the next step. If you cannot get the terminal to output the messages as 
described above, please ask for help from your group members or SAs in one of their lab 
sessions or office hours.

## Step 4: each team member: create personal file in user folder
Each group member has to create a txt file and the **name** of the file must contain
the student's name and student id. Either create the file manually, or do it via the 
terminal all together:

```
git pull
cd users
touch user-id_last-name.txt
git add --all 
git commit -m "I added my user id and name file"
git push
```

## Step 5: each team member: create a branch and program demo 1
Each group member will have to program their own demo 1. Therefore you need to
create your own branch from the remote group repository. As a branch name, use your 
first dash last name "FIRST-LAST" (e.g., MARKUS-NEMITZ). Steps 5-9 cover demo 1.

```
git checkout -b "your-branch-name"
git branch
```

The terminal will confirm that you are in your own personal branch. Once you see this 
confirmation, add a line to the main.cpp file:

```
//this is my version of the group assignment
```

Now add, commit, and push the code to your group repository:

```
git add -A
git commit -m "this is my own version of the git repository; I am safe to make 
changes here"
git push -u origin "your-branch-name"
```

Check your group repository in the browser. You should be able to see the repo
and a branch with your name (You may need to refresh the page).
