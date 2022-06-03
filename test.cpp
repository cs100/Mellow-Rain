#include "Character.h"
#include "attack.hpp"
#include "attackRange.hpp"
#include "attackValue.hpp"
#include "heal.hpp"
#include "healRange.hpp"
#include "healValue.hpp"
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
	EXPECT_DOUBLE_EQ(Jimmy.getHealth(), Jimmy.getMaxHealth());
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
	EXPECT_DOUBLE_EQ(Test.getHealth(), 0.0);
}

TEST(attackTests, attackRange) {
	Character Test("Test", 25, 100.0);
	Attack* testAttack = new AttackRange(10.0, 20.0);
	Test.setAttack(testAttack);
	Test.attack(&Test);
	EXPECT_LE(Test.getHealth(), 90.0);
	EXPECT_GE(Test.getHealth(), 80.0);
}

TEST(attackTests, attackValue) {
	Character Test("Test", 25, 100.0);
	Attack* testAttack = new AttackValue(10.0);
	Test.setAttack(testAttack);
	Test.attack(&Test);
	EXPECT_DOUBLE_EQ(Test.getHealth(), 90.0);
}

TEST(healTests, healRange) {
	Character Test("Test", 25, 100.0);
	Test.decreaseHealth(20.0);
	Heal* testHeal = new HealRange(10.0,20.0);
	Test.setHeal(testHeal);
	Test.heal();
	EXPECT_LE(Test.getHealth(), 100.0);
	EXPECT_GT(Test.getHealth(), 90.0);
}

TEST(healTests, healValue) {
	Character Test("Test", 25, 100.0);
	Test.decreaseHealth(20.0);
	Heal* testHeal = new HealValue(20.0);
	Test.setHeal(testHeal);
	Test.heal();
	EXPECT_DOUBLE_EQ(Test.getHealth(), 100.0);
}

TEST(blockTests, isBlockingTest) {
	Character Test("Test", 25, 100.0);
	EXPECT_FALSE(Test.isBlocking());
	Test.block();
	EXPECT_TRUE(Test.isBlocking());
}

TEST(blockTests, blockValue) {
	Character Test("Test", 25, 100.0);
	Test.setBlockingDamage(0.5);
	Test.block();
	EXPECT_TRUE(Test.isBlocking());
	Test.decreaseHealth(20);
	EXPECT_DOUBLE_EQ(Test.getHealth(),90.0);
}

TEST(blockTests, blockWithAttack) {
	Character Defender("Defender", 25, 100.0);
	Character Attacker("Attacker", 25, 100.0);
	Defender.setBlockingDamage(0.5);
	Defender.block();
	Attacker.setAttack(new AttackValue(20.0));
	Attacker.attack(&Defender);
	EXPECT_DOUBLE_EQ(Defender.getHealth(), 90.0);
	EXPECT_FALSE(Defender.isBlocking());
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}