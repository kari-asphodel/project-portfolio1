# 🧠 What Makes a Useful Programming Prompt?

A useful programming prompt usually provides:

1.  **Context** --- What are we building?
2.  **Objective** --- What are we trying to accomplish?
3.  **Current state** --- What already exists?
4.  **Constraints** --- What are we allowed or not allowed to use?
5.  **Expected behavior** --- What should happen?
6.  **Scope** --- What exactly do we want AI to help with?

From Make me a C++ game to:  I am building a C++ console RPG in Visual Studio. I already have a Player class and an Enemy class. I need help designing a battle loop where the player can attack or defend until either the player or the enemy reaches 0 health. Using basic C++, and a std::vector, don't use external libraries or using namespace std. Before writing code, explain the logic I should use and give me pseudocode. Do not write the complete program.

# 🪄 The C.O.D.E. Prompt Framework

Use this framework when asking AI for programming help.
## C --- Context

Tell AI what you are working with.
**Example:**
> I am a beginner C++ student building a console application in Visual
> Studio.
### Ask
❓ Why would telling AI this matter?
### Answer

It helps AI choose an appropriate level of complexity and avoid assuming
we are using a different language, environment, or type of application.

------------------------------------------------------------------------

## O --- Objective

Tell AI exactly what you are trying to accomplish.
**Example:**

> I need my menu to repeat until the user chooses Exit.
### Ask
❓ Why is "my program doesn't work" not a useful objective?
### Answer

Because "doesn't work" does not describe what the program is supposed to
do.

------------------------------------------------------------------------
## D --- Details & Constraints

Tell AI the rules.

**Example:**

> Use `getline()` for input. Do not use external libraries. Do not use
> `using namespace std`.

### Ask

❓ What could happen if we leave our constraints out?

### Answer

AI may give us a perfectly valid solution that is completely
inappropriate for our project.
Bad code:
`std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');`
## Explain Why

> "Correct code and correct-for-the-assignment code are not always the
> same thing."

------------------------------------------------------------------------

## E --- Expected Behavior

Tell AI what success looks like.
**Example:**

> Invalid input should display an error and return to the menu instead
> of ending the program.
### Ask
❓ Why is expected behavior important when debugging?
### Answer

We cannot identify incorrect behavior unless we first define correct
behavior.
