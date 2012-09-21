#include <memory>
#include <vector>
#include "gtest/gtest.h"
#include "Circle.h"
#include "Square.h"
#include <string>

const float PI = 3.14159265f;

TEST(Shapes, DrawCircle) {
  Circle c{1.0f};
  EXPECT_EQ("drew a circle", c.draw());
}

TEST(Shapes, DrawSquare) {
  Square s{1.0f};
  EXPECT_EQ("drew a square", s.draw());
}

TEST(ShapePtr, DrawSquare) {
  // change this to make the test pass
  std::shared_ptr<Shape> s = std::make_shared<Square>(1.0f);

  EXPECT_EQ("drew a square", s->draw());
}

TEST(Shapes, BunchOfSquaresArea) {
  // change these to make the test pass
  std::shared_ptr<Shape> sq_ptr1 = std::make_shared<Square>(1.0f);
  std::shared_ptr<Shape> sq_ptr2 = std::make_shared<Square>(1.0f);
  std::shared_ptr<Shape> sq_ptr3 = std::make_shared<Square>(1.0f);

  EXPECT_FLOAT_EQ(3.0f, sq_ptr1->area() + 
		  sq_ptr2->area() + sq_ptr3->area());
}

TEST(Shapes, BunchOfCirclesArea) {
  std::shared_ptr<Shape> c_ptr1 = std::make_shared<Circle>(1.0f);
  std::shared_ptr<Shape> c_ptr2 = std::make_shared<Circle>(1.0f);
  std::shared_ptr<Shape> c_ptr3 = std::make_shared<Circle>(1.0f);

  EXPECT_FLOAT_EQ(3.0f * PI, c_ptr1->area() + 
		  c_ptr2->area() + c_ptr3->area());
}

TEST(Shapes, DifferentShapes) {
  // change the assignments so that the test becomes true.
  std::shared_ptr<Shape> sq_ptr1 = std::make_shared<Square>(4.0f); 
  std::shared_ptr<Shape> c_ptr1 = std::make_shared<Circle>(9.0f);
  std::shared_ptr<Shape> c_ptr2 = std::make_shared<Circle>(1.0f);

  EXPECT_FLOAT_EQ(4.0f * 4.0f + PI * 9.0f * 9.0f + PI,
		  sq_ptr1->area() + c_ptr1->area() + c_ptr2->area());
}

TEST(ShapeVec, AreasSumCorrectly) {
  std::vector<std::shared_ptr<Shape> > drawingBoard{6};

  // TODO Add three unit circles to the drawingBoard.
  // TODO Add three unit squares to the drawingBoard

  drawingBoard[0] = std::make_shared<Square>(1.0f);
  drawingBoard[1] = std::make_shared<Square>(1.0f);
  drawingBoard[2] = std::make_shared<Square>(1.0f);
  drawingBoard[3] = std::make_shared<Circle>(1.0f);
  drawingBoard[4] = std::make_shared<Circle>(1.0f);
  drawingBoard[5] = std::make_shared<Circle>(1.0f);
  

  float areas = 0.0f;
  for (const auto &s : drawingBoard) {
    areas += s->area();
  }

  EXPECT_FLOAT_EQ(3.0 + 3.0 * PI, areas);
}


