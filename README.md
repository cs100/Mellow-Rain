# Mellow rain
 > Authors: [Austin Yang](https://github.com/Toona114),
 >          [Zain Ashraf](https://github.com/zain-ashraf),
 >          [Brandon Paulsen](https://github.com/Poly1581),
 >          [Jimmy Delgado-Hernandez](https://github.com/Maker424)

## Project Description
 > Our group project is a text-based RPG game that utilizes only text to interact with the game with no visuals. Our game is called "Mellow Rain" and you are fighting three bosses that get progressively harder. You will have to either attack, guard, or heal to slowly beat all three bosses or give up if odds were against you.
 > This project is interesting for us because we all have interest in video games and played through turn based games at least once in our life. By being able to create a project in creating our own text-based RPG game, we're interested in learning how the inside and behind the stage concept for how these games are planned and executed and what hidden problems and situations we might encounter and resolve through creating our own version.
 > The project will be put together in the programming language of C++ utilizing the strategy pattern.
 > The input for our projects will be user's decisions on what ability/move they want to utilize per turn while our output will be a text summary of what the aftermath of the user's input resulted in in addtion to boss's attack summary.

 ## Phase II
## Class Diagram
![uml final project](https://user-images.githubusercontent.com/66814336/170804226-f879af09-7b1c-45ac-b0fd-51f78d4dcb08.jpg)



## Class Description
As a player, I want to choose a character so I can play as them throughout the game.
As a player, I want to be given a list of 4 character options to pick from and play as throughout the game.
.
As a player, I want to access my inventory to arrange my items.
As a player, I want to be able to see the items in my inventory.
As a player, I want to be able to interact with the items in my inventory.
As a player, I want to be able to move items around in my inventory.

As a player, I want to equip armor so I can defend myself.
As a player, I want to be able to compare armor statistics so I can choose which armor to pick.

As a player, I want to use a healing item so I can have more health.
As a player, I want to eat a potato to increase my health.
As a player, I want to be able to compare statistics between food items so I can pick which one will benefit me the most.

As a player, I want to equip a weapon so I can attack others.
As a player, I want to be able to see how much damage each weapon can do so I can choose one to attack others.
As a player, I want to be given a list of weapon options to choose from in my inventory so I can choose one to attack others.

As a player, I want to attack my enemy so I can decrease their health
As a player, I want to be given a list of different type of attacking interactions I can choose from so I can decrease an enemy’s health.

As a player, I want to guard myself so I can avoid damage.
As a player, I want to be given an option to block an attack so I can avoid damage.
As a player, I want to be given the option to run away so I can avoid damage.

More in-depth
Ideas:
Character
Class/Attributes
Inventory (vector of items)
different types of characters
Enemies
Slime (small med large) (color = attributes)			

Actions
->Attack
->Guard (if there’s time)
			->Guard reduce 25% but u can do action as well?
				->Don’t want to do 100% damage education because that would just make it so you can just defend 24/7
				->Don’t want to do just damage education because you’ll just want to attack no matter what then
				->Can resolve by making defense stack just like a pokemon battle?
->View inventory
->Use items (healing most likely)
->Access weapon/armor
->Run


Items
Healing (food) (least -> greatest healing amount) 
->(Flat base 20, increment of 5?)
Cookie
Apple
Bread
Potato
Steak
Weapons
->Each one has its own attribute/element that allows it to have modified damage/effect to enemies based on the enemy’s attribute/element
Sword
Stick
Fist
Bows
Axes
Armor
	->Each one will be weakest to strongest
	->Modified damage taken based on what the enemy’s attribute is
		**Element Game is fire vs water
		->Element game lost
 damage taken = base damage - armorType(%) + element (10% flat)
->Element game won
damage taken = base damage - armorType(%) = element (10% flat)

Leather (10% damage reduction)
Copper (15% damage reduction)
Steel (20% damage reduction)
Titanium (25% damage reduction)

Each person will choose a class to start off with (left side of UML) and each person will have their inventory which can access items such as healing, armor, and weapons (right side of UML). Each class will have their own unique stats along side different items having different stats such as how much it heals for healing items, durability and resistance for armor, and damage for weapons.
 
 ## Phase III
 ## Design Pattern: 
Strategy Pattern
We will use Strategy Pattern so we can have one main class where we call other functions to create the flow of the game. By utilizing Strategy Pattern, we are able to modify individuals functions (attack, heal, and blocking) to do different things when it's called by main.
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
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
