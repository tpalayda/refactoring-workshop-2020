#pragma once
#include "SnakeInterface.hpp"

using namespace Snake;

namespace
{
    bool isHorizontal(Direction direction)
    {
        return Direction_LEFT == direction or Direction_RIGHT == direction;
    }

    bool isVertical(Direction direction)
    {
        return Direction_UP == direction or Direction_DOWN == direction;
    }

    bool isPositive(Direction direction)
    {
        return (isVertical(direction) and Direction_DOWN == direction)
            or (isHorizontal(direction) and Direction_RIGHT == direction);
    }

    bool perpendicular(Direction dir1, Direction dir2)
    {
        return isHorizontal(dir1) == isVertical(dir2);
    }
} // namespace

