#include "Character.h"
#include "attack.hpp"
#include "gtest/gtest.h"

TEST(characterTests, constructorTest) {
	Character Shiloh("Shiloh",60, 100.0);
	EXPECT_EQ(Shiloh.getName(), "Shiloh");
	EXPECT_EQ(Shiloh.getHealth(), 100.0);
	EXPECT_EQ(Shiloh.getMaxHealth(), 100.0);
	EXPECT_EQ(Shiloh.getAge(), 60);
}

TEST(characterTests, maxHealthTest) {
	Character Jimmy("Jimmy", 60, 100.0);
	Jimmy.increaseHealth(10.0);
	EXPECT_EQ(Jimmy.getHealth(), Jimmy.getMaxHealth());
}

TEST(characterTests, isAliveTest) {
	Character Alive("Alive", 60, 100.0);
	EXPECT_TRUE(Alive.isAlive());
}

TEST(characterTests, isDeadTest) {
	Character Dead("Dead", 60, 0.0);
	EXPECT_TRUE(Dead.isDead());
}

TEST(characterTests, minHealthTest) {
	Character Test("Test", 60, 5.0);
	Test.decreaseHealth(10.0);
	EXPECT_EQ(Test.getHealth(), 0.0);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}