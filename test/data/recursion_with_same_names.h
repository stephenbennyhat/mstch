auto data = mstch::object{
  {"name", std::string{"name"}},
  {"description", std::string{"desc"}},
  {"terms", mstch::array{
    mstch::object{{"name", std::string{"t1"}}, {"index", 0}},
    mstch::object{{"name", std::string{"t2"}}, {"index", 1}}
  }}
};