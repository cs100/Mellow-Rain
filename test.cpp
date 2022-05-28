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

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}