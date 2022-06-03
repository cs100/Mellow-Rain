# Mellow rain
 > Authors: [Austin Yang](https://github.com/Toona114),
 >          [Zain Ashraf](https://github.com/zain-ashraf),
 >          [Brandon Paulsen](https://github.com/Poly1581),
 >          [Jimmy Delgado-Hernandez](https://github.com/Maker424)

## Project Description
 > Our group project is a text-based RPG game that utilizes only text to interact with the game with no visuals. Our game is called "Mellow Rain" and you are fighting three bosses that get progressively harder. You will have to either attack, guard, or heal to slowly beat all three bosses or give up if odds were against you.
This project is interesting for us because we all have interest in video games and played through turn based games at least once in our life. By being able to create a project in creating our own text-based RPG game, we're interested in learning how the inside and behind the stage concept for how these games are planned and executed and what hidden problems and situations we might encounter and resolve through creating our own version.
 > The project will be put together in the programming language of C++ utilizing the strategy pattern.
 > The input for our projects will be user's decisions on what ability/move they want to utilize per turn while our output will be a text summary of what the aftermath of the user's input resulted in in addtion to boss's attack summary.

 ## Phase II
## Class Diagram
![Copy of project UML-2](https://user-images.githubusercontent.com/66814336/171773256-10761952-e149-49f7-b54c-74179aa5bc32.png)




## Class Description
As a player, I want to choose a character so I can play as them throughout the game.

As a player, I want to heal so I can have more health.

As a player, I want to be able to see how much damage each weapon can do so I can choose one to attack others.

As a player, I want to attack my enemy so I can decrease their health.

As a player, I want to block myself so I can avoid damage.

As a player, I want to be given an option to block an attack so I can avoid damage.

As a player, I want to be given the option to run away so I can quit the game.

More in-depth
Ideas:
Character
Class/Attributes
Enemies

Actions
->Attack
->Block (if there’s time)
				->Don’t want to do 100% damage education because that would just make it so you can just defend 24/7
				->Don’t want to do just damage education because you’ll just want to attack no matter what then
->Heal
->Run



 ## Phase III
 ## Design Pattern: 
Strategy Pattern
>We will use Strategy Pattern so we can have one main class where we call other functions to create the flow of the game. By utilizing Strategy Pattern, we are able to modify individuals functions (attack, heal, and blocking) to do different things when it's called by main.
-We picked the Strategy design pattern to make our lives easier in the long run. We have strategies and want to be able to implement them easily without extending our program.
 -Strategy (behavioral) design pattern - We don't actually have to write out multiple functions, we can just write multiple classes to change the behavior and add different moves if necessary (as just a class). If we change any of the methods, we dont have to recomiple the entire program, just that one class.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
  ![p1](https://cdn.discordapp.com/attachments/961506732679503932/982116806653267988/1.JPG)
  ![p2](https://cdn.discordapp.com/attachments/961506732679503932/982116806875561994/2.JPG)
  ![p3](https://cdn.discordapp.com/attachments/961506732679503932/982116807156572170/3.JPG)
  ![p4](https://cdn.discordapp.com/attachments/961506732679503932/982116807450189824/4.JPG)
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
