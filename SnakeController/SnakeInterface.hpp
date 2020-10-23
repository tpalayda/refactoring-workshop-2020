#pragma once

#include <cstdint>
#include "../DynamicEvents/Event.hpp"

namespace Snake
{

enum Direction
{
    Direction_UP    = 0b00,
    Direction_DOWN  = 0b10,
    Direction_LEFT  = 0b01,
    Direction_RIGHT = 0b11
};

struct DirectionInd : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x10;
    virtual std::uint32_t getMessageId() const { return 0x10; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }

    Direction direction;
};


struct TimeoutInd : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x20;
    virtual std::uint32_t getMessageId() const { return 0x20; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }
};

enum Cell
{
    Cell_FREE,
    Cell_FOOD,
    Cell_SNAKE
};

struct DisplayInd : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x30;
    virtual std::uint32_t getMessageId() const { return 0x30; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }

    int x;
    int y;
    Cell value;
};

struct FoodInd : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x40;
    virtual std::uint32_t getMessageId() const { return 0x40; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }

    int x;
    int y;
};

struct FoodReq : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x41;
    virtual std::uint32_t getMessageId() const { return 0x41; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }
};

struct FoodResp : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x42;
    virtual std::uint32_t getMessageId() const { return 0x42; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }

    int x;
    int y;
};

struct ScoreInd : public Event
{
    static constexpr std::uint32_t MESSAGE_ID = 0x70;
    virtual std::uint32_t getMessageId() const { return 0x70; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }
};

struct LooseInd
{
    virtual std::uint32_t getMessageId() const { return 0x70; }
    virtual std::unique_ptr<Event> clone() const  { return nullptr; }
    static constexpr std::uint32_t MESSAGE_ID = 0x71;
};

} // namespace Snake
