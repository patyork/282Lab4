#include <memory>
#include <vector>
#include "gtest/gtest.h"
#include "Triangle.h"
#include <string>

TEST(Shapes, DrawTriangle) {
  Triangle t{1.0f, 1.0f, 1.0f};
  EXPECT_EQ("drew a triangle", t.draw());
}

TEST(ShapePtr, DrawTriangle) {
  // change this to make the test pass
  std::shared_ptr<Shape> t = std::make_shared<Triangle>(1.0f, 1.0f, 1.0f);

  EXPECT_EQ("drew a triangle", t->draw());
}

TEST(Shapes, BunchOfTrianglesArea) {
  // change these to make the test pass
  std::shared_ptr<Shape> t_ptr1 = std::make_shared<Triangle>(1.0f, 1.0f, 1.0f);
  std::shared_ptr<Shape> t_ptr2 = std::make_shared<Triangle>(2.0f, 2.0f, 2.0f);
  std::shared_ptr<Shape> t_ptr3 = std::make_shared<Triangle>(3.0f, 3.0f, 3.0f);

  EXPECT_FLOAT_EQ(6.0621777f, t_ptr1->area() + 
		  t_ptr2->area() + t_ptr3->area());
}

TEST(ShapeVec, AreasSumCorrectly) {
  std::vector<std::shared_ptr<Shape> > drawingBoard{3};

  // TODO Add three unit triangles to the drawingBoard.

  drawingBoard[0] = std::make_shared<Triangle>(1.0f, 1.0f, 1.0f);
  drawingBoard[1] = std::make_shared<Triangle>(2.0f, 2.0f, 2.0f);
  drawingBoard[2] = std::make_shared<Triangle>(3.0f, 3.0f, 3.0f);
  

  float areas = 0.0f;
  for (const auto &s : drawingBoard) {
    areas += s->area();
  }

  EXPECT_FLOAT_EQ(6.0621777f, areas);
}


