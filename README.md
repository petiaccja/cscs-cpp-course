# CSCS C++ Course: Code Examples

Code examples for the C++ course, including small snippets for the slides that need to be tested and also larger examples.

## Structure

Arrange code as per the following:
- One folder for each session
- The session folder's name: `<day_index>_<session_index>_<session_name>[_p<part_index>]` (indexing starts at 1)
- One CMakeLists.txt per session folder
- Said CMakeLists.txt creates a separate executable for each snippet/topic
- See existing code for example!

## Development

Just create a PR to `main`. Make sure CI runs, I set it up for multiple compilers so that the audience can use anything without hickups.