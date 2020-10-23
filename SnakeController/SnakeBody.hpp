#pragma once
#include <list>

class SnakeBody final
{
    private:
        struct Segment
        {
            int x;
            int y;
        };
        std::list<Segment> m_segments;

    public:
        bool isSegmentAtPosition(int x, int y) const;
        Segment calculateNewHead() const;
        void updateSegmentsIfSuccessfullMove(Segment const& newHead);
        void addHeadSegment(Segment const& newHead);
        void removeTailSegmentIfNotScored(Segment const& newHead);
        void removeTailSegment();
};
