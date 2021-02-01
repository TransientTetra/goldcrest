# GoldCrest
# Testing guidelines
## Overview
This document specifies how the code should be tested.

## Unit tests
All possible methods and classes should have unit tests. Each test file should follow the organization
of the source code - a new test suite for each new class. Not all functionality can be tested with unit
tests, but that which can - should be.

Unit tests in general follow the three A rule - arrange, act, assert. Every singular test should have descriptive
names, no need to worry about short names since only the framework will call these functions.
Good unit test should test common cases of the methods, edge cases, unacceptable parameters and so on.
As a rule a good test only tests a single thing - we don't want to debug tests as well as code.
If a bug is discovered in other way than through the existing tests then a new test should be written
to cover it if possible.

## Location
All tests are located under tst folder in the project's root. Further folder hierarchy follows the hierarchy
from the source code folder.

## Framework
The framework we are using is Google test. There's plenty of information on the internet on how to use it.