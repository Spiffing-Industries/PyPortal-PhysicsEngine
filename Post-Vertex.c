#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in vec2 texCoords;
out vec2 TexCoords;
void main()
{
    gl_Position = vec4(position, 1.0);
    TexCoords = (gl_Position.xy*vec2(0.5,0.5))+vec2(0.5,0.5);
    //TexCoords = texCoords;
}
